1. $ cd ~;cd portfolio -- goes to home directory, then protfolio within that

2. $ git switch master -- switches to master branch -- already on it

3. $ mkdir -p week4/framework -- creates week4 directory, then framework directory within that

4. $ cd week4/framework -- goes in to framework directory within week4  directory

5. $ git branch framework -- creates framework branch off origin

6. $ git switch framework -- switches to framework branch

7. $ nano Makefile -- then (indent where there is a <tab>):

feature:
<tab>mkdir $(NAME) ;\
<tab>cd $(NAME) && \
<tab>mkdir bin doc src test lib config ;\
<tab>echo “*” > bin/.gitignore ;\
<tab>echo “*” > lib/.gitignore

8. $ cat -vTE Makefile -- allows us to observe if we have put the tabs(indents) in the right place

9. $ make feature NAME=test_output -- idk what this would do -- uses the Makefile feature to create a bunch of folders within directory test_output

10. $ ls -al test_output -- shows us the files within test_output

11. $ git add Makefile -- adds Makefile feature to git

12. $ git commit -m "Setting up Makefile to create feature folders" -- commits the new change

13. $ git push -- pushes changes to csgitlab

14. $ cd test_output; cd src -- goes in to file src within test_output

15. $ nano test_output.c -- then: 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
/** define some constant values for size of data
* noting of course that if your data needs bigger values, you have to
* edit the source code and change the constants defined here
*/
#define COM_SIZ 60
#define ARG_SIZ 1024
#define RES_SIZ 1024
/** \fn int main(int argc, char *argv[])

 This test program calls an existing executable and checks the
 outputs to standard output meet the expected values.
 It should be called with:
 test_outputs <filename which contains test definitions>
*/
int main(int argc, char *argv[]) {
 FILE *fp; /**< fp is a pointer used to give access to the file
descriptor of the pipe */
 FILE *tests;
 char command[COM_SIZ];
 char arguments[ARG_SIZ];
 char expected[RES_SIZ];
 char actual[RES_SIZ];
 char command_line[COM_SIZ + ARG_SIZ];
 /** try to open the file named on the command line */
 tests=fopen(argv[1], "rt");
 if (tests==NULL) {
 printf("Error opening file %s\n",argv[1]);
 return 1;
 }
 /** we will read each line from the file.
 * These should be structured as:
 * command to run
 * inputs
 * expected output
 * Note: this could go horribly wrong if the input file is not
 * properly formatted
 */
 while (fgets(command, COM_SIZ, tests) != NULL) {
 fgets(arguments, ARG_SIZ, tests);
 fgets(expected, RES_SIZ, tests);
 /** string handling in C can be cumbersome.
 * typically suggestions online make use of "malloc" and
 * "strcpy" and "strcat"
 * but these complicate things and are arguably not good practice
 * strtok gives us a useful shortcut to
 * remove newlines (the way it is used here)
 */
 strtok(command, "\n");
 snprintf(command_line, sizeof command_line, "%s %s", command, arguments);
 /** Now we call the command, with the arguments and capture the result
 * so we can compare it to the expected result.
 * the "popen" command opens a special type of 'file' called a 'pipe'
 */
 fp= popen(command_line , "r");
 if (fp == NULL){
 printf("Failed to run command\n");
 exit(1);
 }
 /** This is how we get the result back out of the pipe we opened
 * after reading the result in to "actual" we compare it to the expected value
 * strcmp is slightly unusual - it returns
 * 0 if the strings are the same,
 * >0 if string1 is
 * bigger than string2, and
 * <0 if string1 is less than string2
 * because 0 is 'false', we negate (!) the result to test if
 * they are the same.
 */
 char message[RES_SIZ + RES_SIZ + 21];
 while(fgets(actual, sizeof(actual), fp) != NULL) {
 /** we create a message to let us know what was expected and what we got
 * note that we have split the line in the next statement – that is
 * fine, we can!
 */
 snprintf(message, sizeof message, "%s %s %s %s",
 "Expected ", expected, " and got ", actual);
 printf("%s",message);
 /** Because we want the test suite to keep running, we use an if
 * statement rather than the assert function
 */
 if(!strcmp(actual, expected)) {
 printf("OK\n");
 }
 else {
 printf("FAILED\n");
 }
 }
 /** if we don't close file handles, we risk using up the machines resources
 */
 pclose(fp);
 }
 fclose(tests);
 }
 return 0;
}

16. $ gcc -Wall -pedantic test_outputs.c -o test_outputs -- compiles the code and checks for any errors

17. $ ./test_outputs file_does_not_exist -- doesnt work as file_does_not_exist does not exist

18. $ ./test_outputs -- doesn't work as no input

19. $ nano op_test -- then:

wc -l
test_outputs.c
108 test_outputs.c
wc -l
test_outputs.c
82 test_outputs.c
wc -l
test_outputs.c
108 Test_outputs.c

20. $ ./test_outputs op_test -- this runs the file with the inputs listed in op_test, testing if the file gives the right output

21. $ git add test_outputs.c -- adds new file to git

22. $ git add op_test -- adds new file to git

23. $ git commit -m "test framework and sample test suite" -- commits the new changes to git
 
24. $ git push -- pushes file to csgitlab

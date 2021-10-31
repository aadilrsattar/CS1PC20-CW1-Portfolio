1. $ cd ~; cd portfolio -- switches to home folder, then goes in to portfolio folder

2. $ git switch master -- switches to master branch

3. $ git merge greeting -- merges greeting branch on to master

4. $ git merge vectors -- merges vectors branch on to master

5. $ git merge framework -- merges framework branch on to master

6. $ git branch baseconversion -- creates branch baseconversion on origin

7. $ git switch baseconversion -- switches to baseconversion branch

8. $ mkdir week5 ; cd week5 -- creates week5 directory then goes in to it

9. $ make -f ../week4/framework/Makefile feature NAME=dec2bin -- creates feature dec2bin with Makefile from week4 folder

10. $ cd dec2bin -- goes in to the directory dec2bin

11. $ nano test/dec2bin_tests -- this creates the directory test, then the file dec2bin_tests which includes:

bin/dec2bin
0
                  0
bin/dec2bin
1
                  1
bin/dec2bin
8
               1000
bin/dec2bin
10
               1010

12. $ nano src/conv.h -- creates conv.h file in src, then add:

#define STRLEN 20
void dec2r(char in[], int r, char out[]);

13. $ nano src/conv.c -- creates conv.c file in src, then add:

#include "conv.h"
#include <stdio.h>
/** convert a string from base 10 to another base <=10 and >1 (!)
* limit inputs to non-negative integers
* also assume (never a good idea!) that the input string is a valid number
* can consider other values later...!
*/
void dec2r(char in[], int r, char out[]) {
 int decval;
 sscanf(in, "%d",&decval);
 int pos=STRLEN-1;
 out[pos-1]='0';
 while (decval > 0) {
 out[--pos]=(decval % r) + '0';
 decval /= r;
 }
 return;
}

14. $ gcc src/conv.c -o lib/conv.o -c -- compiles the code, with conv.o containing the output

15. $ ar rv lib/libconv.a lib/conv.o -- archives the contents within lib/libconv.a

16. $ nano src/dec2bin.c -- then:

#include "conv.h"
#include <stdio.h>
int main(int argc, char * argv[]) {
 /** requires a decimal value as the single command line argument
 */
 int num;
 char output[STRLEN]={[0 ... 18] = ' ', [19]='\0'};
 dec2r(argv[1],2,output);
 printf("%s\n", output);
 return 0;
}

17. $ gcc src/dec2bin.c -o bin/dec2bin -Isrc -lconv -Llib -- compiles the code, i dont know what the -etc do

18. $ ~/portfolio/week4/framework/test_output/src/test_outputs test/dec2bin_tests -- uses the work in the last week folder to validate the code

19. $ cd ~;cd portfolio -- goes back to home folder, then portfolio within that

20. $ git switch master -- switches to master branch on git

21. $ git merge baseconversion -- merges baseconverson branch on to master

22. $ mkdir docs -- creates docs directory

23. $ doxygen -g -- uses doxygen to compiles a report

24. $ git add Doxyfile -- adds Doxygen file to git

25. $ nano submission_answers.md -- then:

Answers to courswork questions

26. $ nano _FrontPage.md -- then:

Module Code: CS1PC20
Assignment report Title: Portfolio
Student Number (e.g. 25098635):
Date (when the work completed):
Actual hrs spent for the assignment:
Assignment evaluation (3 key points):

27. $ git add submission_answers.md -- adds submissions_answers.md to git 

28. $ git add _FrontPage.md -- adds _FrontPage.md to git

29. $ git commit -m “added configured Doxyfile, answers and frontpage” -- commits all the new items to git

30. $ git push -- pushes everything to csgitlab

31. $ doxygen -- idk what the point of this one is -- it creates a latex and html folder in docs

32. $ cd docs/latex

33. $ make -- idk what this does

34. $ git add refman.pdf -- adds refman.pdf to get

35. $ git commit -m “adding documentation” -- commits refman.pdf 

36. $ git push -- pushes new changes to csgitlab

# Week 3 Observations

1. $ cd ~ -- Returns to home directory

2. $ cd portfolio -- Goes in to portfolio

3. $ mkdir week3 -- Creates directory week3 

4. $ mkdir week3/greeting -- Creates directory greeting within week3 directory

5. $ cd week3/greeting -- Go in to greeting directory

6. $ git branch greeting -- Create git branch know as greeting

7. $ git switch greeting -- Switch to greeting branch greeting

8. $ nano greeting.c -- then:

	#include <stdio.h>
	int greet(void) {
 		printf("Hello world!\n");
 		return 0;
	}

9. $ gcc -Wall -pedantic -c greeting.c -o greeting.o -- creates output file

10. $ nano test_result.c -- then:

	#include <assert.h>
	#include "greeting.h"
	int main(void) {
		assert(0==greet());
		return 0;
	}

11. $ nano greeting.h -- then:

	int greet(void);

12. $ echo greeting.o >> ~/portfolio/.gitignore -- adds the greeting.o to the end of .gitignore

13. $ echo libgreet.a >> ~/portfolio/.gitignore -- adds the greeting.o to the end of .gitignore

14. $ ar rv libgreet.a greeting.o -- creates libgreet.a library and adds greeting.o to it

15. $ gcc test_result.c -o test1 -L. -lgreet -I. -- compiles a program known as test_result.c and outputing it in test1, and to tell it to look for the library

16. $ ./test1 -- shows the output in the test1 

17. $ git add -A

18. $ git commit -m “greeting library and greeting test program” -- annotates the change

19. $ git push -- pushes it to csgitlab

20. $ cd ~/portfolio/week3 -- switches to directory week3 in portfolio

21. $ git switch master -- switches to master branch

22. $ git branch vectors -- creates vectors off master

23. $ git switch vectors -- swtiches in to the vectors branch

24. $ mkdir vectors -- creates directory "vectors"

25. $ cd vectors -- goes in to vectors directory

26. $ nano vectors.h -- then:

	#define SIZ 3
	int add_vectors(int x[], int y[], int z[]);

27. $ nano test_vector_add.c -- then:

	#include <assert.h>
	#include "vector.h"
	/** A simple test framework for vector library
	* we will be improving on this later
	*/
	int main(void) {
	/** xvec and yvec will be inputs to our vector arithmetic routines
	* zvec will take the return value
	*/
		int xvec[SIZ]={1,2,3};
 		int yvec[SIZ]={5,0,2};
 		int zvec[SIZ];
 		add_vectors(xvec,yvec,zvec);
 		/** We want to check each element of the returned vector
 		*/
		assert(6==zvec[0]);
 		assert(2==zvec[1]);
 		assert(5==zvec[2]);
 		/** If the asserts worked, there wasn’t an error so return 0
 		*/
 		return 0;
	}

28. $ nano vector.c -- then:

	#include "vector.h"
	/** A simple fixed size vector addition routine
	* Add each element of x to corresponding element of y, storing answer in z
	* It is the calling codes responsibility to ensure they are the right size
	* and that they have been declared.
	* We return an error code (0 in this case showing no error), but will add the
	* program logic to handle actual errors later
	*/
	int add_vectors(int x[], int y[], int z[]) {
 		for (int i=0;i<SIZ;i++)
 			z[i]=x[i]+y[i];
 		return 0;
}

29. $ gcc -Wall -pedantic -c vector.c -o vector.o -- creates the output file vector.o and asks to show all warnings

30. $ ar rv libvector.a vector.o -- compiles libvector library and adding vector.o

31. $ gcc test_vector_add.c -o test_vector_add1 -L. -lvector -I. -- compiling

32. $ ./test_vector_add1 -- create directory, test_vector add1

33. $ git add -A 

34. $ git commit -m “code to add two vectors of fixed size”

35. $ git push

36. Change the assert(5==zvec[2]); line to be assert(5==zvec[1]); and recompile test to see what happens -- It doesnt work and says the assertion failed

37. $ nano vector.h -- then append this to the next line:

	int dot_product(int x[], int y[], int z[]);

38. $ nano vector.c -- then append this to the next line:

	/** A simple fixed size dot product routine
	* multiply each element of x to corresponding element of y, adding up totals
	* It is the calling codes responsibility to ensure they are the right size
	* and that they have been declared.
	* We return the actual value we have calculated
	* We may need program logic to handle actual errors later
	*/

	int dot_product(int x[], int y[], int z[]) {
 		/** res <- a local variable to hold the result as we calculate it
 		*/
 		int res = 0;
 		for (int i=0;i<SIZ;i++)
 			res=res + x[i]*y[i];
 	return res;
	}

39. $ nano test_vector_dot_product.c -- then:

	#include <assert.h>
	#include "vector.h"
	/** A simple test framework for vector library
	*/
	int main(void) {
	/** xvec and yvec will be inputs to our vector arithmetic routines
	*/
		int xvec[SIZ]={1,2,3};
 		int yvec[SIZ]={5,0,2};
 		int result;
 		result=dot_product(xvec,yvec);
 		/** We want to check each element of the returned vector
 		*/
		assert(11==result);
 		return 0;
	}

40. $ gcc -Wall -pedantic -c vector.c -o vector.o -- compiles the file

41. $ ar rv libvector.a vector.o -- idk what this does -- creates an archive of vector.o in libvector.a

42. $ gcc test_vector_dot_product.c -o test_vector_dot_product1 -L. -lvector - I. -- compiles the code

43. $ ./test_vector_dot_product1 -- runs the code in test_vector_dot_product1

44. $ git add -A -- adds all things that have changed to git

45. $ git commit -m “code to calculate dot product of two vectors of fixed size” -- commits the new changes

46. $ git push -- pushes it to csgitlab

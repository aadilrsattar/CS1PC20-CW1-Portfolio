#include <assert.h>
#include "vector.h"
/** A simple test framework for vector library
*/
int main(void) {
/** xvec and yvec will be input to our vector aritmetic routines
*/
	int xvec[SIZ]={1,2,3};
	int yvec[SIZ]={5,0,2};
	int result;
	/** We want to check each element of the returned vector
	*/
	assert(11==result);
	return 0;
}

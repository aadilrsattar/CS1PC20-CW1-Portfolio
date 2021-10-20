#include "vector.h"
/** A simple fixed size vector addition routine
* Add each element of x to the corresponding element of y, storing answer in z
* It is the calling codes responsibility to ensure they are the right size
* and that they have been declared.
* We return an error code (0 in this case showing no error), but will add the 
* program logic to handle actual errors later
*/
int add_vectors(int x[],int y[], int z[]) {
	for (int i=0;i<SIZ;i++)
		z[i]=x[i]+y[i];
	return 0;
}

/** A simple fixed size dot product routine
* multiply each element of x to the corresponding element of y, adding up totals
* It is the calling codes responsibility to ensure they are the right size
* and that they have been declared.
* We return the actual value we have calculated
* We may need program logic to handle actual errors later
*/
int dot_product (int x[], int y[]) {
	/** res <- a local variable to hold the result as we calculate it
	*/
	int res =0;
	for (int i=0;i<SIZ;i++)
		res=res + x[i]*y[i];
	return res;
}


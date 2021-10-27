#include "conv.h"
#include <stdio.h>
/** convert a string from base 10 to another base <=10 and >1 (!)
* limit inputs to non-negative integers
* also assume (never a good idea!) that the input string is a valid number
* can consider other values later...!
*/
void dec2r(char in[], int r, char out[]) {
	int decval;
	sscanf(in,"%d",&decval);
	int pos=STRLEN-1;
	out[pos-1]='0';
	while (decval > 0) {
		out[--pos]=(decval % r) + '0';
		decval /= r;
	}
	return;

}


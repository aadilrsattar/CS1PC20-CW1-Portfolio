#include "conv.h"
#include <stdio.h>

int main(int argc, char * argv[]) {

	/** requires a decimal value as the single command line arguement
	*/
	int num;
	char output[STRLEN]={[0 ... 18] = ' ', [19]='\0'};
	dec2r(argv[1],2,output);
	printf("%s\n", output);
	return 0;
}


// this uses default include directory passed as CFLAGS in the Makefile.am
#include <stdio.h>
#include "mylibrary.h"

#ifdef MYEXTRAFEATURE
void myextrafeature(){
	printf("Extra feature is working\n");
}
#endif

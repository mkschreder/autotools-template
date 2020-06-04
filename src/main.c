#include <stdio.h>
#include "mylibrary.h"

int main(){
	printf("my application\n");
#ifdef MYEXTRAFEATURE
	myextrafeature();
#endif
	mylibrary_method();
	return 0;
}

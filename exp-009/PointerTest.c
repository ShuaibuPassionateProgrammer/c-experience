#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val = 30;
	int *pointer_p;
	pointer_p = &val;
	
	printf("Address of val = %x \n", &val);
	printf("Address of pointer variable = %x \n", &pointer_p);

	return 0;
}
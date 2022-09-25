#include "main.h"

/**
 * demo_dereference - demo function
 * @n: address of variable
 */
void demo_dereference(int *n)
{
	int p = 3;
	int *ptrp = &p;
	int *ptrn = n;

	printf("value of p through dereferencing: %d\n", *ptrp);
	printf("value of n through dereferencing: %d\n", *ptrn);
}


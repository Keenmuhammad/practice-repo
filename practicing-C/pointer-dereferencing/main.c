#include "header.h"
#include <stdio.h>
/**
 *main - calls other functions
 *Return: Always 0
 */
int main(void)
{
	int n;

	n = 402;
		printf("n = %d\n", n);
	change_val(&n);
	printf("n = %d\n", n);
	return (0);
}

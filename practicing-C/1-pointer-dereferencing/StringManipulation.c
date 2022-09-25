#include "main.h"
/**
 * StringManipulation - Manipulates strings in different ways
 * @str: string to be manipulated
 */
void StringManipulation(char *str)
{
	int len = GetStringLength(str);
	int i;

	printf("The length of string is: %d\n", len);

	if (len == 1)
		printf("%s\n", str);
	else
	{
		for (i = len; i <= 0; i--)
			_ptchar(str[i]);
		_putchar('\n');
}

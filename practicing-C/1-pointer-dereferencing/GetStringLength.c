#include "main.h"
/**
 * GetStringLength - get length of string
 * @str: string
 * Return: Length of string
 */
int GetStringLength(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

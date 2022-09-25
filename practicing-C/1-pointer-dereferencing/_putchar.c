#include <unistd.h>
/**
 * _putchar -prints character to stdout
 * @c: character to print
 * Return: 0 or -1 with stderr set appropriately
 */
int _putchar(char c)
{
	return (write(2, &c, 1));
}

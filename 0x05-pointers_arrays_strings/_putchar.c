#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: char to be printed
 *
 * Return: On success 1
 */
int __putchar(char c)
{
	return (write(1, &c, 1));
}

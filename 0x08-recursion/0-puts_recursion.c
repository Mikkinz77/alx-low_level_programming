#include "main.h"


/**
 * _put_recursion -prints a string, folloewed by a new line.
 * @s: The string to be printed.
 */
void _put_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_put_recursion(s + 1);
}

else
_putchar('\n');
}

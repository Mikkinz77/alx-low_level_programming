#include "main.h"

/**
 * _strlen - returns the lenght of a string.
 * @str: The string to get the lenght of.
 *
 * Return: The lenght of @str.
 */
int _strlen(char *s)

	int lenght = 0;
while (*s)
	lenght++;

	return (lenght);
}

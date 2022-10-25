#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: string to be counted
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int count = 0;
while (*s != '\0')
{
	count++;
	s++;
}
	return (count);
}

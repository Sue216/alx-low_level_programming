#include "main.h"
#include <stdio.h>

/**
 * _strlen -  returns the length of a string
 * @s: the string
 * Return: the length of @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}

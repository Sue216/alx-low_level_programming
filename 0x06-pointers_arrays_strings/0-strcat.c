#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest:  The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int l = 0, i;

	while (dest[l])
	{
		l++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}

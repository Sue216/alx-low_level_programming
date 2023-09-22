#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: input
 * @c: input
 * Return: a pointer to the first occurrence of the character,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)

{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (s + m);
	}
	return (NULL);
}

#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes lowercase letters to uppercase.
 * @s: The string to be changed
 * Return: String with all letters changed to uppercase.
 */

char *string_toupper(char *s)

{
	int k = 0;

	while (*(s + k) != '\0')
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
		{
			*(s + k) = *(s + k) - 32;
		}
		k++;
	}
	return (s);
}

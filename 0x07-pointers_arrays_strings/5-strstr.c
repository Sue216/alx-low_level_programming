#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: input
 * @needle: input
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *s = needle;

		while (*h == *s && *s != '\0')
		{
			h++;
			s++;
		}

		if (*s == '\0')
			return (haystack);
	}
	return (NULL);
}

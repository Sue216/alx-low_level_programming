#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: analized string.
 * Return: string with all vowels changed.
 */

char *leet(char *s)

{
	char t[] = "aeotlAEOTL";
	char c[] = "4307143071";
	int a = 0;
	int d;

	while (*(s + a) != '\0')
	{
	for (d = 0; d <= 9; d++)
	{
	if (*(s + a) == t[d])
	{
	*(s + a) = c[d];
	}
	}
	a++;
	}
	return (s);
}

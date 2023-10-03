#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: the result of s1 and s2 concatenated,
 * or NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int d = 0, r = 0, i = 0, n = 0;
	char *k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[d])
		d++;

	while (s2[r])
		r++;

	n = d + r;
	k = malloc((sizeof(char) * n) + 1);

	if (k == NULL)
		return (NULL);

	r = 0;

	while (i < n)
	{
		if (i <= d)
			k[i] = s1[i];

		if (i >= d)
		{
			k[i] = s2[r];
			r++;
		}

		n++;
	}

	k[i] = '\0';
	return (k);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: allocated space in memory
 * @s2: allocated space in memory
 * @n: bytes
 * Description: n is greater or equal to the length of s2 then use the entire string s2
 * Return: 0 when successful,
 * or NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m = 0, i = 0, l = 0, e = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[m])
		m++;

	while (s2[l])
		l++;

	if (n >= l)
		e = m + l;
	else
		e = m + n;

	str = malloc(sizeof(char) * e + 1);
	if (str == NULL)
		return (NULL);

	l = 0;
	while (i < e)
	{
		if (l <= m)
			str[i] = s1[i];

		if (i >= m)
		{
			str[i] = s2[l];
			l++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}




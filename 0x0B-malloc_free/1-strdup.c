#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copy of the string given as a parameter
 * @str: string
 * Return: _strdup function returns a pointer to the duplicated string,
 * or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int o = 0, t = 1;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[t])
	{
		t++;
	}

	p = malloc((sizeof(char) * t) + 1);

	if (p == NULL)
		return (NULL);

	while (o < t)
	{
		p[o] = str[o];
		o++;
	}

	p[o] = '\0';
	return (p);
}

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size
 * Return: If nmemb or size is 0, then _calloc returns NULL,
 * or If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int m = 0, y = 0;
	char *d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	d = malloc(y);

	if (d == NULL)
		return (NULL);

	while (m < y)
	{
		d[m] = 0;
		m++;
	}

	return (d);
}

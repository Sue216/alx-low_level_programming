#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to fill the array
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int u;
	char *n;

	if (size == 0)
		return (NULL);

	n = malloc(size * sizeof(char));

	if (n == NULL)
		return (NULL);

	for (u = 0; u < size; u++)
	{
		n[u] = c;
	}

	return (n);
}

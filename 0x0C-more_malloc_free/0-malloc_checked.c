#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: a pointer to the allocated memory,
 * or cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *o;

	o = malloc(b);

	if (o == NULL)
		exit(98);

	return (o);
}

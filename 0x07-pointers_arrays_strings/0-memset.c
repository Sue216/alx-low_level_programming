#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int p;

	for (p = 0; p < n; p++)
		s[p] = b;
	return (s);
}

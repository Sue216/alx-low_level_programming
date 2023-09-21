#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 * n bytes from src.
 * @dest: The string to append upon.
 * @src: The string to append to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0, d_l = 0;

	while (dest[i++])
	d_l++;
	for (i = 0; src[i] && i < n; i++)
	dest[d_l++] = src[i];
	return (dest);
}

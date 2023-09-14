#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return empty
 */

void print_triangle(int size)
{
	int s, i, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			for (i = size - s; i > 1; i--)
			{
				_putchar(32);
			}
			for (z = 0; z <= s; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

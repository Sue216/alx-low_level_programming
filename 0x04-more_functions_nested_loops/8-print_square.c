#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: empty
 */

void print_square(int size)
{
	int s, q;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			for (q = 0; q < size; q++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

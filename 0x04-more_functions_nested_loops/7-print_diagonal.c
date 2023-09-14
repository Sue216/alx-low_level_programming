#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: empty
 */

void print_diagonal(int n)
{
	int d, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < n; d++)
		{
			for (c = 0; c < d; c++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
		}
	}
}

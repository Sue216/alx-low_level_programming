#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])

{
	int s, u;

	for (s = 0; s < 8; s++)
	{
		for (u = 0; u < 8; u++)
			_putchar(a[s][u]);
		_putchar('\n');
	}
}

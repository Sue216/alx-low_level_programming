#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: 0 when succesful
 */

void times_table(void)
{
	int t, a, b, l, e;

	for (t = 0; t <= 9; t++)
	{
		for (a = 0; a <= 9; a++)
		{
			b = t * a;
			if (b > 9)
			{
				l = b % 10;
				e = (b - l) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(e + '0');
				_putchar(l + '0');
			}
			else
			{
				if (a != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(b + '0');
			}
		}
		_putchar('\n');
	}
}

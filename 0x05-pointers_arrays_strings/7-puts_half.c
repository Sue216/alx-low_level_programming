#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: The string
 * Return: nothing
 */

void puts_half(char *str)
{
	int c = 0;
	int s;

	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 1)
	{
		s = (c - 1) / 2;
		s += 1;
	}
	else
	{
		s = c / 2;
	}
	for (; s < c; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}

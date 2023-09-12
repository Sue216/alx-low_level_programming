#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: number to be checked
 * Return: value of the last digit of a number
 */

int print_last_digit(int l)
{
	int last;

	last = l % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

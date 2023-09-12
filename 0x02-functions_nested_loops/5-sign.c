#include "main.h"

/**
 * print_sign -  prints the sign of a number
 * @n: number to be checked
 * Return: 1 if number is greater than zero,
 * -1 if number is less than zero or 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}

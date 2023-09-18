#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The string
 * Return: Nothing
 */

void puts2(char *str)
{
	int k;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (k = 0; k < a; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}

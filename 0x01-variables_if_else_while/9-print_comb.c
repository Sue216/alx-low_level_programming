#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

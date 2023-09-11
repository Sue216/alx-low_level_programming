#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');

	return (0);
}

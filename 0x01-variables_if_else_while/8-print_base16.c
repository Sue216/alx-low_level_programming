#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 when successful
 */

int main(void)
{
	int i;
	char low;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}

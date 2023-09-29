#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  adds positive numbers
 * @argc: counts the number of lines in argument argv
 * @argv: the argument
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int m;
	unsigned int i, sum = 0;
	char *n;

	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			n = argv[m];

			for (i = 0; i < strlen(n); i++)
			{
				if (n[i] < 48 || n[i] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(n);
			n++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}



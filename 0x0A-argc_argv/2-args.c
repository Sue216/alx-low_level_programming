#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: counts the number of lines in the argument argv
 * @argv: the argument
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: counts the number of lines in the argument argv
 * @argv: the argument
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[argc]);

	return (0);
}

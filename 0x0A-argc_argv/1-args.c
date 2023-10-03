#include <stdio.h>

/**
 * main - print number of argument passed.
 * @argc: number of commandline arguments.
 * @argv: pointer to an array of command line arguments.
 * Return: 0 (success).
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the miniimum number of coins
 * to make change dfor an amount of money.
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments.
 * Return: 0 On success, Non_Zero On fail.
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, leastcent = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			leastcent += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins to make change for amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success); otherwise 1 in error
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}

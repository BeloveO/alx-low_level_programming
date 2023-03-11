#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 for error and 0 for success
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}


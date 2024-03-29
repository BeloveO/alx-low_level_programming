#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the opcodes of its own function
 * @argc: argument count
 * @argv: argument vector
 * Return: success (0)
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *opc = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}


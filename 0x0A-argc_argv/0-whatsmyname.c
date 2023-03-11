#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print name of program
 * @argc: number of characters on command line
 * @argv: array of string on the command line
 * Return: always success (0)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

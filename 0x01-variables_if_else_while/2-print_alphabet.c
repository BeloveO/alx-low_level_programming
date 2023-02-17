#include <stdio.h>
/*
 * main - Entry Point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c;
	long int n1 = 0, n2 = 1, sn;

	for (c = 0; c <= 98; c++)
	{
		sn = n1 + n2;
		printf("%lu", sn);

		n1 = n2;
		n2 = sn;

		if (c == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

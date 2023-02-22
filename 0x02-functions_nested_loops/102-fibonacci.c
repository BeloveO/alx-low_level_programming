#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers from 1 and 2
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c;

	long int n1, n2, sn;

	n1 = 0;
	n2 = 1;

	for (c = 0; c < 50; c++)
	{
		sn = n1 + n2;
		printf("%lu", sn);

		n1 = n2;
		n2 = sn;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

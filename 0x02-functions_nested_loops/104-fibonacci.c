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
	long int n1_h1, n1_h2, n2_h1, n2_h2;
	long int h1, h2;

	for (c = 0; c <= 92; c++)
	{
		sn = n1 + n2;
		printf("%lu", sn);

		n1 = n2;
		n2 = sn;
	}
	n1_h1 = n1 / 10000000000;
	n2_h1 = n2 / 10000000000;
	n1_h2 = n1 % 10000000000;
	n2_h2 = n2 % 10000000000;

	for (c = 93; c < 99; c++)
	{
		h1 = n1_h1 + n2_h1;
		h2 = n1_h2 + n2+h2;
		if (n1_h2 + n2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);

		if (c == 98)
			printf("\n");
		else
			printf(", ");
		n1_h1 = n2_h1;
		n1_h2 = n2_h2;
		n2_h1 = h1;
		n2_h2 = h2;
	}
	return (0);
}

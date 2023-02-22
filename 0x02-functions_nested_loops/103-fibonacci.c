#include <stdio.h>
/**
 * main - gets the sum of all even fibonacci numbers under 4000000
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long int n1 = 0, n2 = 1, c = 0, sn;

	while (n2 < 4000000)
	{
		sn = n1 + n2;
		n1 = n2;
		n2 = sn;

		if (sn % 2 == 0)
			c = c + sn;
	}
	printf("%lu\n", c);
	return (0);
}

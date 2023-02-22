#include <stdio.h>
/**
 * main - sum of 3vand 5 multiples under 1024
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a, sum;

	sum = 0;

	for (a = 0; a < 1024; a++)
		if (a % 3 == 0 || a % 5 == 0)
			sum = sum + a;
	printf(sum);
	return (0);
}

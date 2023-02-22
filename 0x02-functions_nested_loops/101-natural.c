#include <stdio.h>
/**
 *
 */
int main(void)
{
	int a, sum;

	sum = 0;

	for (a = 0; a < 1024; a++)
		if (a % 3 == 0 || a % 5 == 0)
			sum = sum + a;
	return (sum);
}

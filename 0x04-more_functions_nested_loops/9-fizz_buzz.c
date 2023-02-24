#include <stdio.h>
/**
 * main - prints from 1 to 100
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 = 0)
			printf("Fizz");
		else if (i % 5 = 0)
			printf("Buzz");
		else if (i % 3 = 0 && i % 5 = 0)
			printf("FizzBuzz");
		else
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}
			else
				printf("%d", i);
		}
		putchar(' ');
	}
}

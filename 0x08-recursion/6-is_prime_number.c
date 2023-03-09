#include "main.h"
/**
 * pn - to check for prime numbers
 * @n: input to be checked
 * @p: iterations of numbers
 * Return: 1 if n is a prime number and 0 if otherwise
 */
int pn(int n, int p)
{
	if (n % p == 0)
	{
		if (n == p)
			return (1);
		else
			return (0);
	}
	else
		return (pn(n, p + 1));
}

/**
 * is_prime_number - function to check if input is a prime number
 * @n: input checked
 * Return: returns 1 if input is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (pn(n, 2));
}

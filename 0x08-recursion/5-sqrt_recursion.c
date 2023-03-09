#include "main.h"
/**
 * sqrt - return square root
 * @n: number to check for square root
 * @r: number to check if it's square root of given number
 * Return: square root for natural number or -1 for unnatural
 */
int sqrt(int n, int r)
{
	int sr = r * r;

	if (sr == n)
		return (r);
	else if (sr > n)
		return (-1);
	else
		return (sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check for square root
 * Return: -1 if the square root is not natural or square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

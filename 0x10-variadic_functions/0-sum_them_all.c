#include "variadic_functions.h"
/**
 * sum_them_all - sum of all arguments given
 * @n: the arguments given
 * Return: sum of arguments given
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		s += va_arg(ap, int);

	va_end(ap);

	return (s);
}

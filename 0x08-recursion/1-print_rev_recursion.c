#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to be modified
 */
void _print_rev_recursion(char *s)
{
	while (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

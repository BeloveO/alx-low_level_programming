#include "main.h"
/**
 * _puts - function to print a string
 *
 * @str: string to be printed
 */
void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}

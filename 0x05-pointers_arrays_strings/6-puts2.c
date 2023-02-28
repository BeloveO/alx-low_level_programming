#include "main.h"
/**
 * puts2 - prints every other character in a string
 *
 * @str: string to be modified
 */
void puts2(char *str)
{
	int i = 0;
	for (i = 1; *(str + i) != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

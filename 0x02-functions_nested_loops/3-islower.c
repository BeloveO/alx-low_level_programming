#include "main.h"
/**
 * _islower - checks if input is lowercase
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

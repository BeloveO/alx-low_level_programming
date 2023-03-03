#include "main.h"
/**
 * *rot13 - function to encode strings using rot13
 *
 * @s: string to be encoded
 *
 * Return: returns encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;

	if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
		s[i] = s[i + 13];
	else if ((s[i] >= 'N' && S[I] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		s[i] = s[i - 13];

	return (s);
}

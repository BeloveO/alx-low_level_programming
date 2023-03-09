#include "main.h"
/**
 * _strlen - checks string length
 * @s: string checked
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _palindrome - checks if string is equal both ways
 * @i: array position for string
 * @j: reversed array position for string
 * @s: string checked
 * Return: 1 if string is a palindrome and 0 if not
 */
int _palindrome(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + _palindrome(s, i + 1, j - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string checked
 * Return: 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_palindrome(s, 0, _strlen(s) + 1));
}

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
	s++;
	return (_strlen(s) + 1);
}

/**
 * _palindrome - checks if string is equal both ways
 * @s: string checked
 * Return: 1 if string is a palindrome and 0 if not
 */
int _palindrome(char *s)
{
	int i = _strlen(s) - 1;

	if (*s == s[i])
	{
		s++;
		i--;
	}
	else
		return (0);
	return (1);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string checked
 * Return: 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);
	return (_palindrome(s));
}

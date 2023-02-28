#include "main.h"
/**
  * rev_string - Reverses a string
  *
  * @s: The string to be modified
  */
void rev_string(char *s)
{
	int i, c = 0, k;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < (c - 1); i++)
	{
		for (k = i + 1; k > 0; k--)
		{
			aux = *(a + k);
			*(a + k) = *(a + (k - 1));
			*(a + (k - 1)) = aux;
		}
	}
}


/**
 * is_prime_number - devuelve 1 si es primo, de lo contrario 0
 * @n: el número
 * Return: 1 si es primo, 0 si no lo es
 */

#include "main.h"

int is_palindrome(char *s)
{
	int length = 0;
	int i, j;

	while (s[length] != '\0')
	{
		length++;
	}

	i = 0;
	j = length - 1;

	while (i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
		i++;
		j--;
	}

	return (1);
}

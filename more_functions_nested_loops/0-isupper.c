#include "main.c"

/**
 * _isupper - int
 * @c: the character checked
 * Description: checks for uppercase character
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

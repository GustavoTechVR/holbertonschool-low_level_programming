#include "main.h"

/**
 * _strlen - int
 * @c: the character checked
 * Description: returns the length of a string
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	return (length);
}

#include "main.h"

/**
 * _atoi - char
 * @s: the character checked
 * Description: Write a function that convert a string to an integer
 * Return: 0
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
		{
			if (started)
				break;
			sign *= -1;
		} else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		} else if (started)
		{
			break;
		}
	}
	return (result * sign);
}

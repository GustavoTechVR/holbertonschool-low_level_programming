#include "main.h"

/**
 * print_sign - int
 * @c: the character checked
 * Description: prints the sign of a number
 * Return: 1 if c is letter, lowercase or uppercase, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include "main.h"

/**
 * print_most_numbers - void
 * @num: checked
 * print_most_numbers - Imprime los números del 0 al 9 excluyendo 2 y 4
 * return: 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	if (num != 2 && num != 4)
		{
		_putchar(num + '0');
		}
	}

	_putchar('\n');
}

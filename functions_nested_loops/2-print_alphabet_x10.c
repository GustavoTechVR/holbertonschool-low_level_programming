#include "main.h"

/**
 * print_alphabet_x10 - void
 * Description: task x10
 */

void print_alphabet_x10(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

	_putchar('\n');
	}
}

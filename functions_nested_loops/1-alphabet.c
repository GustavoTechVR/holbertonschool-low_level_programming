#include "main.h"

/**
 * main - tasks
 * Description: task
 * Return: 0
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}

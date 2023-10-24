#include "main.h"

/**
 * _puts - str
 * @str: string printed
 * Description: prints a string, followed by a new line, to stdout
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

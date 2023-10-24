#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')  // Caso base: cuando llegamos al final de la cadena
	{
		_putchar('\n');  // Imprimimos una nueva línea
		return;
		}

	_putchar(*s);
	_puts_recursion(s + 1);
}

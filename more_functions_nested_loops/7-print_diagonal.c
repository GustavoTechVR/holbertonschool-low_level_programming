#include "main.h"

void print_diagonal(int n)
	{
	if (n <= 0)
		{
		_putchar('\n');
		}
	else
		{
		int espacios = 0;

		while (espacios < n)
			{
			int i;

			for (i = 0; i < espacios; i++)
				{
				_putchar(' ');
				}
			_putchar('\\');
			_putchar('\n');
			espacios++;
			}
		}
	}

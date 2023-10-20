#include "main.h"

/**
 * print_to_98 - int
 * @n: the character checked
 * Description: prints all natural numbers from n to 98
 * Return: 0
 */

void print_to_98(int n)
	{
	int i;

	if (n <= 98)
		{
		for (i = n; i <= 98; i++)
			{
			if (i != 98)
			{
				if (n < 0) 
				{
				_putchar('-');
				_putchar(i / 10 * -1 + '0');
				_putchar(i % 10 * -1 + '0');
				}
			else
				{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				}
			_putchar(',');
			_putchar(' ');
			}
		else	
			{
			if (n < 0)
				{
				_putchar('-');
				_putchar(i / 10 * -1 + '0');
				_putchar(i % 10 * -1 + '0');
				}
			else
				{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				}
			_putchar('\n');
			}
        		}
		}
	else
		{
		for (i = n; i >= 98; i--)
			{
			if (i != 98)
				{
				if (n < 0)
					{
					_putchar('-');
					_putchar(i / 10 * -1 + '0');
					_putchar(i % 10 * -1 + '0');
					}
				else 
					{
					_putchar(i / 10 + '0');
					_putchar(i % 10 + '0');
					}
				_putchar(',');
				_putchar(' ');
				}
			else
				{
				if (n < 0) {
					_putchar('-');
					_putchar(i / 10 * -1 + '0');
					_putchar(i % 10 * -1 + '0');
				}
				else
				{
					_putchar(i / 10 + '0');
					_putchar(i % 10 + '0');
				}
				_putchar('\n');
				}
			}
		}
	}

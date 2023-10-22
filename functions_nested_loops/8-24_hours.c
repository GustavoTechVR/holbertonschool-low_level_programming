#include "main.h"

/**
 * print_digit - void
 * jack_bauer - void
 * Description: prints every minute of the day of Jack Bauer
 * Return: void
 */

void print_digit(int digit)
{
	_putchar(digit + '0');
}

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
			{
			print_digit(hour / 10);

			print_digit(hour % 10);
			_putchar(':');

			print_digit(minute / 10);

			print_digit(minute % 10);
			_putchar('\n');
			}
	}
}

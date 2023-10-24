#include "main.h"

/**
 * swap_int - int
 * @a: checked
 * @b: checked
 * Description: swaps the values of two integers
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

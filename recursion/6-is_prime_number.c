#include "main.h"

/**
 * is_prime_number - int
 * @n: checked
 * Description: verify prime number
 * Return: 1 prime number, otherwise 0
 */

#include "main.h"

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
	return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

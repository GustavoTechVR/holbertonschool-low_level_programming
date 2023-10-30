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
	int divisor = 5;
	int incremento = 2;
	
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2 || n == 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	while (divisor * divisor <= n)
		{
		if (n % divisor == 0)
	       	{
			return (0);
		}

		divisor += incremento;
		incremento = 6 - incremento;
		}

	return (1);
}

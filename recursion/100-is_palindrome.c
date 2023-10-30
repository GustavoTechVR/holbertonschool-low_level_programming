/**
 * is_prime_number - devuelve 1 si es primo, de lo contrario 0
 * @n: el número
 * Return: 1 si es primo, 0 si no lo es
 */

#include "main.h"

int is_prime_number(int n)
{
	int i;
	
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	if (n % 6 != 1 && n % 6 != 5)
		return (0);

	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}
	return (1);
}
#include <stdio.h>

/**
 * main - Imprime los primeros 50 números de la secuencia de Fibonacci
 *
 * Return: 0
 */
int main(void)
{
	long a = 1, b = 2, next, i;

	printf("%ld, %ld, ", a, b);

	for (i = 2; i < 50; i++)
	{
		next = a + b;
		printf("%ld", next);

		if (i != 49)
		printf(", ");

		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}

#include <stdio.h>

/**
 * main - tasks
 * Description: task
 * Return: 0
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	printf("Lowercase alphabet: ");
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	printf("\nUppercase alphabet: ");
	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 62

int main(void)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int password_length = 10;

	srand(time(NULL));

	printf("Contraseña generada: ");

	for (int i = 0; i < password_length; i++)
	{
		int index = rand() % PASSWORD_LENGTH;

		putchar(charset[index]);
	}

	putchar('\n');

	return (0);
}

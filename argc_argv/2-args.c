#include <stdio.h>

/**
 * main - int
 * @argc: checked
 * @argv: checked
 * Description: Write a program that prints all arguments it receives
 * Return: 0
 */

int main(int argc, char *argv[])
	{
	for (int i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
	return (0);
	}

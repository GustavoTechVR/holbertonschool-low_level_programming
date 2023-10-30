/**
 * wildcmp - Compara dos cadenas con el carácter especial '*'.
 * @s1: La primera cadena.
 * @s2: La segunda cadena que puede contener '*'.
 * Return: 1 si las cadenas son idénticas, 0 en caso contrario.
 */

#include "main.h"

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}


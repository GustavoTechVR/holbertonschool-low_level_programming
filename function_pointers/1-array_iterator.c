#include <stddef.h>

/**
 * array_iterator - int
 * @array: check array
 * @size: check size
 * @action: check action
 * Description: parameter element array
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

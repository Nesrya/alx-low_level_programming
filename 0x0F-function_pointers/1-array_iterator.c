#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this one prints each array elem on a newl
 * @array: the array
 * @size: tells how many elem to print
 * @action: the pointer to print in regular or hex
 * Return: void or nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

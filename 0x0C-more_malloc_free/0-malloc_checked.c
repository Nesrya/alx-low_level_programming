#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -this task allocates memory using malloc
 * @b: number of bytes to allocate only
 *
 * Return: a pointer to the allocated memory space
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

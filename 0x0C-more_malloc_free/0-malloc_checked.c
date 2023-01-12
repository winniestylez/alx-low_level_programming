#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory to malloc
 * @b: the int to be used
 * Return: a pointer to the allocated memory, if fails, terminate with value 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}

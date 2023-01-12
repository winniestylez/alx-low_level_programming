#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated.
 * malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for @ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: @ptr if @new_size == @old_size, NULL if new_size == 0 &&
 * @ptr != NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *olda = ptr;
	unsigned int b;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < old_size; b++)
		a[b] = olda[b];

	free(olda);
	return (a);
}

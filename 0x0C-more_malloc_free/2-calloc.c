#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @numele: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int numele, unsigned int size)
{
	char *ptr;

	if (numele == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * numele);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, numele * size);

	return (ptr);
}

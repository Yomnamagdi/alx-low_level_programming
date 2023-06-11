#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, or 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *ch = (char *) &a;

	return (*ch);
}


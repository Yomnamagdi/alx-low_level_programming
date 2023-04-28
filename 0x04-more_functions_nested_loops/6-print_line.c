#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @l: number of times the character _ should be printed
 * Return: Always 0
 */
void print_line(int l)
{
	if (l <= 0)
	{
		_putchar('\n');
	} else
	{
		int l;

		for (i = 1; i <= l; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

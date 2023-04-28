
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @dl: number of times the character \ should be printed
 * Return: Always 0.
 */
void print_diagonal(int dl)
{
	if (dl <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < dl; i++)
		{
			for (j = 0; j < dl; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}


#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charr;

	for (charr = 'a'; charr <= 'z'; charr++)
	{
		putchar(charr);
	}
	putchar('\n');
	return (0);
}



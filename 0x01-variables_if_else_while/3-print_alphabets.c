#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int char1;

	for (char1 = 'a'; char1 <= 'z'; char1++)
		putchar(char1);
	for (char1 = 'A'; char1 <= 'Z'; char1++)
		putchar(char1);
	putchar('\n');
	return (0);
}



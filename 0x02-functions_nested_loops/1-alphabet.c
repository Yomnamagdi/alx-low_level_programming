#include "main.h"
/**
 *main : A function that print the alphabet in lowercase,followed by a new line
 *@void : return nothing
 *@ print_alphabet - print all alphabet in lowercase
 * Return: Always 0.
 */

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
_putchar('\n');
}

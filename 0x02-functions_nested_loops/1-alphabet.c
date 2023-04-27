#include "main.h"
/**
 *main : A function that print the alphabet in lowercase,followed by a new line
 *@void : return nothing
 *@print_alphabet: return void
 * Return: Always 0.
 */

void print_alphabet(print_alphabet)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
_putchar('\n');
}

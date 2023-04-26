#include "main.h"
/**
 *main : print all alphabet in lowercase
 *@void : return nothing
 *@print_alphabet: return void
 * Return: Always 0.
 */

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
_putchar('\n');
}

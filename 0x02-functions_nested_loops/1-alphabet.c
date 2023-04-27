#include "main.h"
/**
 *main : print_alphabet - print all alphabet in lowercase
 *@void : return nothing
 *@ print_alphabet - print all alphabet in lowercase
 * Return: Always 0.
 */

void print_alphabet(void) /*print_alphabet - print all alphabet in lowercase*/
{
char word;
for (word = 'a'; word <= 'z'; word++)
	_putchar(word);
_putchar('\n');
}

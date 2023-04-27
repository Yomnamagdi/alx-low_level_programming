#include "main.h"
/**
 * main: print_alphabet_x10 - prints 10 times the alphabet.
 * @print_alphabet_x10: return 10 times the alphabet
 * Return: 0
 */
void print_alphabet_x10(char print_alphabet_x10)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}

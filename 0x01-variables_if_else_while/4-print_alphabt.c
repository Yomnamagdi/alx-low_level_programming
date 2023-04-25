#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char char2 = 'a';

	while (char2 <= 'z')
	{
		if (char2 != 'e' && char2 != 'q')
		{
			putchar(char2);
		}
		char2++;
	}
	putchar('\n');
	return (0);
}


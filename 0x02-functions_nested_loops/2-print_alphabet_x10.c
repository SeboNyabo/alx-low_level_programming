#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * return void
 */

void print_alphabet_x10(void)

{
	int num = 1;
	char ch;

	while (num++ <= 10)

	{
		for (ch = 'a'; ch <= '2'; ch++)
				_putchar(ch);
				_putchar('\n');
	}
}

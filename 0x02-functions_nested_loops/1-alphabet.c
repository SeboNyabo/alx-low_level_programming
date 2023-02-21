#include "main.h"

/**
 * starts from main
 * print_alphabet - prints the lower case alphabet, followed by a new line
 * return: (0)
 */

void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

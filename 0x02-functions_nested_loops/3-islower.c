#include "main.h"

/**
 * _islower - checks for lowercase character
 * (int c) to be checked
 * Return 1 if c is lower case other wise 0
 */
int _islower(int c)
{
	char ch;

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}

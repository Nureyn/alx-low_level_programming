#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabet
 * Discription: ('print alphabet')
 * Return always 0
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');

	return (0);
}

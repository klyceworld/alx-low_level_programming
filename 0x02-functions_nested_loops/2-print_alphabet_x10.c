#include "main.h"
/**
 * print_alphabet_x10 - prints 10x of the a-z
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	i++;
	_putchar('\n');
	}
}

#include <stdio.h>
/**
 *  main - A program that prints a-z and A-Z
 *  Return: 0 (success)
 */
int main(void)
{
	char y;
	char z;

	y = ('a');
	while (y <= 'z')
	{ putchar(y);
		y++;
	}
	z = ('A');
	while (z <= 'Z')
	{ putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}

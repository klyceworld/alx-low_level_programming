#include <stdio.h>
/**
 * main - A program that prints lower case alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}

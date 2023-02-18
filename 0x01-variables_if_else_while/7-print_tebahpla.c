#include <stdio.h>
/**
 * main - A program that prints alphabets in reverse
 * Return: 0(success)
 */
int main(void)
{
	char s;

	s = 'z';
	while (s >= 'a')
	{	putchar(s);
		s--;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - A program that print a-z but skipped e and q
 * Return: 0 (success)
 */
int main(void)
{
	char d;

	d = 'a';
	while (d <= 'z')
	{
		if ((d != 'q' && d != 'e') && d <= 'z')
			putchar(d);
		d++;
	}
		putchar('\n');
		return (0);
}

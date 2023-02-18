#include <stdio.h>
/**
 * main - A program that print alphabet in hexadecimal
 * Return: 0(success)
 */
int main(void)
{
	int i;
	char j;

	j = 'a';
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

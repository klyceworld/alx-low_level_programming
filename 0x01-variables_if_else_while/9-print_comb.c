#include <stdio.h>
/**
 * main - A program that prints digits seperated with comma
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}

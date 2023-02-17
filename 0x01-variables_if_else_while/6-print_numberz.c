
#include <stdio.h>
/**
 * main - A program that prints all base ten digit with putchar
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}

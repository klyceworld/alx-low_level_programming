#include "main.h"
/**
 * print_alphabet - A called function
 * main - A program that prints a-z using putchar
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}

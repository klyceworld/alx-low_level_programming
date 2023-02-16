#include <stdio.h>
/**
 * main - A program that display the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %d\nbyte(s)", sizeof(a));
printf("Size of a int: %d\nbyte(s)", sizeof(b));
printf("Size of long int: %d\nbyte(s)", sizeof(c));
printf("Size of long long int: %d\nbyte(s)", sizeof(d));
printf("Size of float: %d\nbyte(s)", sizeof(f));
return (0);

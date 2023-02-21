#include "main.h"
/**
 * _isalpha - find character apart from a-z
 * @c:  variable for the search
 * Return: 1(success) 0(false)
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
		return (1);
		}
		return (0);
}

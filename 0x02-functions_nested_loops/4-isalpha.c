#include "main.h"
/**
 * _isalpha -  find alpha
 * Description: check for alphabetic letter
 * @c: the int
 * Return: 1 if c is a letter, alphabet
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

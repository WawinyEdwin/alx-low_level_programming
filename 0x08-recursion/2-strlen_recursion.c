#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}

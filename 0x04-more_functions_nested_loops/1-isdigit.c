#include "main.h"
/**
 * _isdigit - check if a char is a digit
 * @c: param
 * Return: 1 if true, 0 is false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

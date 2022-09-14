#include "main.h"
/**
 * print_sign - sign print
 * Description: Prints sign of a no.
 * @n: an int
 * Return: 1 if +, 0 if 0, -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}


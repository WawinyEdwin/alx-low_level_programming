#include "main.h"
/**
 * print_last_digit - the last digit
 * Description: print the last digit
 * @n: value param
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int l_digit = n % 10;

	if (n < 0)
	{
		l_digit = l_digit * -1;
	}
	_putchar(l_digit + '0';
	return (l_digit);
}

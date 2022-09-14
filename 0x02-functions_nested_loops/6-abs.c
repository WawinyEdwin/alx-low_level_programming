#include "main.h"
/**
 * _abs - absolute value
 * Description: computes absolute value
 * @n: integer value
 * Return: an integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (n);
}


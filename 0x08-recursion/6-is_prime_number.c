#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_prime_number - check prime number
 * @n: number
 * Return: an int
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - if divisible
 * @num: to be checked
 * @div: divisor
 * Return: a number
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

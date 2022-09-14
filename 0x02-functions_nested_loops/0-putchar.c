#include "main.h"

/**
 * main - entry point
 * Description: prints putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int str[] = { 95, 112, 117, 116, 99, 104, 97, 114};
	int i, len;

	len = sizeof(str) / sizeof(int);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}

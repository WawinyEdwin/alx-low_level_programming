#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Description: in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

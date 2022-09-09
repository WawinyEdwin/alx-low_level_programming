#include <stdio.h>
/**
 * main - entry point
 * Description: Prints all single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');
	return (0);
}

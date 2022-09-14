#include "main.h"

/**
 * _islower - is lower
 * Description: is lower
 * @c: int param
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}

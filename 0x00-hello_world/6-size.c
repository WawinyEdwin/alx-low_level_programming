#include <stdio.h>
/*
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int intT;
	float floatT;
	long long int  longintT;
	long longT;
       	char charT;

	printf("Size of char: %lu byte (s) \n", sizeof(charT));
	printf("Size of an int: %lu byte (s)\n", sizeof(intT));
        printf("Size of a long int: %lu byte (s)\n", sizeof(longT));
	printf("Size of a long long int: %lu byte (s)\n", sizeof(longinT));
	printf("Size of a float: %lu byte (s)\n", sizeof(floatT));
	
	return (0);
}	

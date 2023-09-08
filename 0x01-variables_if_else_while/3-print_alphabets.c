#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 *
*/
int main(void)
{
	char c;
	char A;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}


	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: 0  (Success)
 */
int main(void)
{
	int c;


	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}


	putchar('\n');
	return (0);
}

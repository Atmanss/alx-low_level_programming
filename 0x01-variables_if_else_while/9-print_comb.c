#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);


		if (b != '9')
		putchar(',');


		if (b != '9')
		putchar(' ');
	}


	putchar('\n');
	return (0);
}

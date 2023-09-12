#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints '_putchar\n'
 * Return: Always 0 (success)
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}

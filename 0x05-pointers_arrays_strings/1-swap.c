#include "main.h"

/**
 * void swap_int - swap the values between two variables
 *
 * @n: A pointer to a pointer.
*/

void swap_integers(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

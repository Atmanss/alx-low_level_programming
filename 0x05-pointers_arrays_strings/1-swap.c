#include "main.h"

/**
 * void swap_int - swap the values between two variables
 *
 * @a: Pointer to the integer to be swaped with b
 * @b: Pointer to the integer to be swaped with a
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

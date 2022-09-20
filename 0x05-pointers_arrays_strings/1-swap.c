#include "main.h"
/**
 * swap_int - function that swaps the valueof two intgers
 * @a: this the first parameter
 * @b: this the second parameter
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}

#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	int alpha = 97;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}


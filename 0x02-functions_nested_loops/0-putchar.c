#include "main.h"
/**
 * main - Printing _putchar message
 *
 * Return:  Always 0 (Success)
 */

int main(void)
{
	int i;
	char c[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);

	}
	_putchar('\n');
		return (0);
}

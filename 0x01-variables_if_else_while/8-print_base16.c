#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a;

	for (i = 0; i <= 9; i++)
	{   putchar (i + '0');
	}
		for (a = 97; a <= 102; a++)
		{

			putchar(a);
		}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int m;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
		for (m = 65; m <= 90; m++)
		{
			putchar(m);
		}

		putchar('\n');
		return (0);
}

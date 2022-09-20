#include "main.h"

/**
 * _strlen - function that returns the lenght of a string
 * @s: the input string
 * Return: Lenght of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
		;
		return (i);
}

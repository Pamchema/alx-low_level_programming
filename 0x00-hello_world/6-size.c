#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intertype;
	float floatType;
	char chartype;
	long int longIntType;
	long long int LongLongIntType;
printf("Size of a char: %d byte(s)\n", sizeof(chartype));
printf("Size of an int: %d byte(s)\n", sizeof(intertype));
printf("Size of a long int: %d byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %d byte(s)\n", sizeof(LongLongIntType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));
return (0);
}

/*
 * File: 100-print_comb3.c
 * Auth: eyarios bekele
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
	/* local variable declaration */
	int firstDigit;
	int secondDigit;
	int digitAscend = 0;

	for (firstDigit = 0; firstDigit < 9; digitAscend++, firstDigit++)
	{
		for (secondDigit = digitAscend + 1; secondDigit < 10; secondDigit++)
=======
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
>>>>>>> ff762737b68c035aae6a69ee2375fc0ef4ae944b
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

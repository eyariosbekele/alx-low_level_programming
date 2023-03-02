/*
 * date: December 9, 2022
 * Auth: eyarios bekele
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
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
	int lastDigit;
	int i = 0;

	for (firstDigit = 0; firstDigit < 8; i++, firstDigit++)
	{
		for (secondDigit = i + 1; secondDigit < 9; i++, secondDigit++)
		{
			for (lastDigit = i + 2; lastDigit < 10; lastDigit++)
			{
				putchar((firstDigit % 10) + '0');
				putchar((secondDigit % 10) + '0');
				putchar((lastDigit % 10) + '0');
				if (firstDigit == 7 && secondDigit == 8 && lastDigit == 9)
=======
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
>>>>>>> ff762737b68c035aae6a69ee2375fc0ef4ae944b
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

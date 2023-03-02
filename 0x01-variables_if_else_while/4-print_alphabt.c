/*
 * date: December 9, 2022
 *
 * auth: eyarios bekele
 */
#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, excpet q and e
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* local variable declaration */
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase != 'e' && lowerCase != 'q')
		{
			putchar(lowerCase);
		}
	}
	putchar('\n');
	return (0);
}

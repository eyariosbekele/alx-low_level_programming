/*
 * auth: eyarios bekele
 *
 * date: December 9, 2022
 */
#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* local variable declaration */
	int num;

	for (num = 0; num < 10; num++)
	{
		/* represent int to char */
		putchar(num + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

/*
 * auth: eyarios bekele
 *
 * date: December 9, 2022
 */
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* local variable declaration */
	int num;

	for (num = 0; num < 10 ; num++)
		/* represent int to char */
		putchar(num + '0');
	putchar('\n');
	return (0);
}

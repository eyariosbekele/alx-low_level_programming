/*
 * auth: eyarios bekele
 *
 * date: December 9, 2022
 */
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	/* local variable declaration */
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}

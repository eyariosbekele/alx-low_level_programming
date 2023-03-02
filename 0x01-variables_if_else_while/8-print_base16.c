/*
 * auth: eyarios bekele
 *
 * date: December 9, 2022
 */
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* local variable declaration */
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		/* represent int to char */
		putchar(num + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

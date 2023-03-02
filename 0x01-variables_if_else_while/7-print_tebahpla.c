/*
 * auth: eyarios bekele
 *
 * date: December 9, 2022
 */
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* local variable declaration */
	char lowerCase;

	for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
		putchar(lowerCase);
	putchar('\n');
	return (0);
}

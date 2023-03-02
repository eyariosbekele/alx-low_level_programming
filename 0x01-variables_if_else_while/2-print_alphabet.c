/*
 * file: 2-print_alphabet.c
 *
 * auth: eyarios bekele
 */
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* local variable declaration */
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);
	putchar('\n');
	return (0);
}

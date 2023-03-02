/*
 * file: 3-print_alphabets.c
 *
 * auth: eyarios bekele
 */
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0(Success)
 */
int main(void)
{
	/* local variable declaration */
	char lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z' ; lowercase++)
		putchar(lowercase);
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);
	putchar('\n');
	return (0);
}

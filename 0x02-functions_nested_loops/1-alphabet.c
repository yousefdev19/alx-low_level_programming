#include <stdio.h>

/**
 * main - Entry point
 * print_alphabet - main funtion
 *
 * Description: this program print alphapet
 * parameter: their is no parameter
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
	putchar(10);
}

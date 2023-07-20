#include <stdio.h>

/**
 * print_alphabet - print the alphabet in lowercase
 * Description: this program print text
 * parameter: their is no parameter
 *
 * Return: Always 0 (Success)
 */

	void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	printf("\n");
}

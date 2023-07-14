#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program print alphabets
 * parameter: their is no parameter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
{
	printf("%c ", ch);
	ch++;
}

	return (0);
}

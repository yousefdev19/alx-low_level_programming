#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program print alphapet
 * parameter: their is no parameter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);
}

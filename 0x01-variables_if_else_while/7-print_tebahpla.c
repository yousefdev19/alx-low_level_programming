#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program print text
 * parameter: their is no parameter
 *
 * Return: Always 0 (Success)
 */

	int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
		putchar('\n');
		return (0);
}

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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c", ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		printf("%c", ch);
	}
	printf("\n");
	return (0);
}

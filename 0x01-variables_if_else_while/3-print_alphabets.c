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
	char chu = "A";

	while (ch <= 'z')
{
	printf("%c", ch);
	ch++;
}
	while (chu <= "Z")
{
	printf("%c", chu);
}
	printf("\n");
	return (0);
}

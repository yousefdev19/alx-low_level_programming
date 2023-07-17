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
	for (int ch = 97; ch <= 122; ch++)
{
	if (ch == 101 || ch == 113)
	{
		continue;
	}
	putchar(ch);
}
	putchar('\n');
	return (0);

}

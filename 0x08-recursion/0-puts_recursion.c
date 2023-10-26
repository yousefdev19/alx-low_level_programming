#include "main.h"

/**
 * _puts_recursion - prints a string follwed by new line
 *
 * Description: this program print text
 * @s: pointer to a string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == "\0")
	{
		_putchar("\n");
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

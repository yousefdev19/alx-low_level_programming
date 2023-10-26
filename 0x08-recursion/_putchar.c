#include <unistd.h>

/**
 * _puchar  - Write the charchter m to the output
 *
 * @m: the charchter to print
 * Description: this program print text
 * parameter: their is no parameter
 *
 * Return: on success 1
 */

int _putchar(char m)
{
	return (write(1, &m, 1));
}

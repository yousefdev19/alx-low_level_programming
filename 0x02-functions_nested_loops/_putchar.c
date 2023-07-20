#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the charcter c to stdout
 *
 * @c: the character that we print
 * Description: writes the c
 *
 * Return: Always (0) success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <main.h>

/**
 * _putchar - a function that prints a character
 *
 * @c : the character to be printed
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

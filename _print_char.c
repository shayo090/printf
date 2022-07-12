#include "main.h"
#include <stdarg.h>

/**
 * _print_char - a function that prints a character
 *
 * @args : the list of arguments passed into _printf()
 *
 * Return: 1
 */

int _print_char(va_list args)
{
	char character;

	character = va_arg(args, int);

	_putchar(character);
	return (1);
}

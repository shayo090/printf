#include "main.h"
#include <stdarg>

/**
 * _print_str - A function that prints a string
 * @args: string to print
 * Return: i
 */

int _print _str(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}

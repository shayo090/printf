#include "main.h"
#include <stdarg.h>

/**
 * _printf - a function that does what the printf() do
 *
 * @format : the format to be printed
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, n = 0;

	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] != %)
			_putchar(format[i]);
			n++;
		else
		{
			if (format[i + 1] == 'c')
				_print_char(va_arg(args, int));
				n++;
				i++;
			else if (format[i + 1] == 's')
				i++;
				 _print _str(va_list args);
			else if (format[i + 1] == '%')
				i++;
				_putchar('%')
				n++;
			else if (format[i + 1] == 'd')
				i++;
				_print_int(va_list args);
				n++;
			else if (format[i + 1] == 'i')
				i++;
				_print_binary(va_list args)
				n++;
		}

		i++;
	}
	va_end(args);
	return (n);
}

#include "main.h"
#include <stdarg.h>
/**
 * _print_int - function that prints an integer
 *
 * @args : the args
 *
 * Return: number of characters printed
 */

int _print_int(va_list args)
{
	int count, m, n;

	count = 1;
	m = 0;
	n = 0;

	n = va_arg(args, int);

	m = n;
	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
		n = m;
		count += 1;
	}

	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	recursion_int(m);
	return (count);
}


/**
 * recursion_int - a function that prints an integer by recursion
 *
 * @q : the integer to be printed
 *
 * Return: the number of characters printed
 */

void recursion_int(int q)
{
	unsigned int p;

	p = q;
	if (p / 10)
		recursion_int(p / 10);
	_putchar(p % 10 + '0');
}

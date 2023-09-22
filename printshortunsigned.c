#include "main.h"

/**
 * _print_short_unsigned - Print a short unsigned integer
 * @n: The short unsigned integer to print
 *
 * Return: Number of characters printed.
 */
int _print_short_unsigned(unsigned short n)
{
	int printed_chars = 0;

	if (n == 0)
	{
	_putchar('0');
	printed_chars++;
	}
	else
	{
	unsigned short num = n;
	unsigned short divisor = 1;

	while (num / divisor >= 10)
	divisor *= 10;

	while (divisor != 0)
	{
	unsigned short digit = num / divisor;

	_putchar('0' + digit);
	printed_chars++;
	num %= divisor;
	divisor /= 10;
	}
	}

	return (printed_chars);
}


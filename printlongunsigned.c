#include "main.h"

/**
 * _print_long_unsigned - Print an unsigned long integer
 * @n: The unsigned long integer to print
 *
 * Return: Number of characters printed.
 */
int _print_long_unsigned(unsigned long n)
{
	int printed_chars = 0;

	if (n == 0)
	{
	_putchar('0');
	printed_chars++;
	}
	else
	{
	unsigned long num = n;
	unsigned long divisor = 1;

	while (num / divisor >= 10)
	divisor *= 10;

	while (divisor != 0)
	{
	unsigned long digit = num / divisor;

	_putchar('0' + digit);
	printed_chars++;
	num %= divisor;
	divisor /= 10;
	}
	}

	return (printed_chars);
}


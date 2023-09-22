#include "main.h"

/**
 * _print_unsigned - Print an unsigned integer
 * @n: The unsigned integer to print
 *
 * Return: Number of characters printed.
 */
int _print_unsigned(unsigned int n)
{
	int printed_chars = 0;

	if (n == 0)
	{
	_putchar('0');
	printed_chars++;
	}
	else
	{
	unsigned int num = n;
	unsigned int divisor = 1;

	while (num / divisor >= 10)
	divisor *= 10;

	while (divisor != 0)
	{
	unsigned int digit = num / divisor;

	_putchar('0' + digit);
	printed_chars++;
	num %= divisor;
	divisor /= 10;
	}
	}

	return (printed_chars);
}


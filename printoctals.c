#include "main.h"

/**
 * _print_octal - Print an unsigned integer as an octal number
 * @n: The unsigned integer to print as octal
 *
 * Return: Number of characters printed.
 */
int _print_octal(unsigned int n)
{
	int printed_chars = 0;
	unsigned int octal_digits[100];
	int i = 0;

	if (n == 0)
	{
	_putchar('0');
	printed_chars++;
	}
	else
	{
	while (n > 0)
	{
	octal_digits[i] = n % 8;
	n /= 8;
	i++;
	}

	for (i--; i >= 0; i--)
	{
	_putchar('0' + octal_digits[i]);
	printed_chars++;
	}
	}

	return (printed_chars);
}


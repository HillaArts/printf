#include "main.h"

/**
 * _handle_hash_flag - Handle the '#' flag for printf-style formatting
 * @specifier: The conversion specifier (e.g., 'x' or 'X')
 * @args: The va_list containing the argument to format
 *
 * Return: The number of characters printed.
 */
int _handle_hash_flag(char specifier, va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int printed_chars = 0;

	if (specifier == 'x' || specifier == 'X')
	{
	_putchar('0');
	_putchar(specifier);
	printed_chars += 2;
	printed_chars += _print_hexadecimal(n, (specifier == 'X'));
	}

	return (printed_chars);
}


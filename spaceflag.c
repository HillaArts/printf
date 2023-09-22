#include "main.h"

/**
 * _handle_space_flag - Handle the ' ' (space) flag for printf-style formatting
 * @specifier: The conversion specifier (e.g., 'd' or 'i')
 * @args: The va_list containing the argument to format
 *
 * Return: The number of characters printed.
 */
int _handle_space_flag(char specifier, va_list args)
{
	int n = va_arg(args, int);
	int printed_chars = 0;

	if (specifier == 'd' || specifier == 'i')
	{
	if (n >= 0)
	{
	_putchar(' ');
	printed_chars++;
	}
	printed_chars += _print_int(n);
	}

	return (printed_chars);
}


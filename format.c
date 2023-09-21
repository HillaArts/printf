#include "main.h"

/**
 * _vprint - custo vprint function
 * @format: format string
 * @args: variable argument list
 *
 * Return: number of characters printed
 */

int _vprintf(const char *format, va_list args)
{
	int printed_chars = 0;

	if (format == NULL)
	return (-1);

	while (*format)
	{
	if (*format != '%')
	{
	_putchar(*format);
	printed_chars++;
	}
	else
	{
	format++;
	if (*format == '\0')
	break;
	switch (*format)
	{
	case 'c':
	printed_chars += _print_char(va_arg(args, int));
	break;
	case 's':
	printed_chars += _print_string(va_arg(args, char *));
	break;
	case '%':
	_putchar('%');
	printed_chars++;
	break;
	case 'd':
	case 'i':
	printed_chars += _print_int(va_arg(args, int));
	break;
	case 'b':
	printed_chars += _print_binary(va_arg(args, unsigned int));
	break;
	case 'u':
	printed_chars += _print_unsigned(va_arg(args, unsigned int));
	break;
	case 'o':
	printed_chars += _print_octal(va_arg(args, unsigned int));
	break;
	case 'x':
	printed_chars += _print_hexadecimal(va_arg(args, unsigned int), 0);
	break;
	case 'X':
	printed_chars += _print_hexadecimal(va_arg(args, unsigned int), 1);
	break;
	default:
	_putchar('%');
	_putchar(*format);
	printed_chars += 2;
	break;
	}
	}
	format++;
	}
	return (printed_chars);
}


#include "main.h"

/**
 * _printf - print formatted text to stdout
 * @format: format string containing the directives
 * @...: optional arguments for the format string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);
	printed_chars = _vprintf(format, args);
	va_end(args);

	return (printed_chars);
}


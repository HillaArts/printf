#include "main.h"

/**
 * _vprint - custom vprint function that takes a format string and a variable
 * arguement list and print formatted output.
 *
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
				case 'S':
					{
						char *str = va_arg(args, char *);
						char hex[3];

						if (str == NULL)
						{
							printed_chars += _print_string("(null)");
						}
						else
						{
							int i;

							for (i = 0; str[i] != '\0'; i++)
							{
								if (str[i] < 32 || str[i] >= 127)
								{
									printed_chars += _putchar('\\');
									printed_chars += _putchar('x');
									snprintf(hex, sizeof(hex), "%02X", (unsigned char)str[i]);
									printed_chars += _print_string(hex);
								}
								else
								{
									printed_chars += _putchar(str[i]);
								}
							}
						}
					}
					break;
				case 'p':
					{
						void *ptr = va_arg(args, void *);

						if (ptr == NULL)
						{
							printed_chars += _print_string("(nil)");
						}
						else
						{
							printed_chars += _putchar('0');
							printed_chars += _putchar('x');
							printed_chars += _print_hexadecimal((uintptr_t)ptr, 1);
						}
					}
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


#include "main.h"

int _handle_hash_flag(char specifier, va_list args)
{
    int printed_chars = 0;

    switch (specifier)
    {
        case 'x':
            printed_chars += _putchar('0') + _putchar('x');
            printed_chars += _print_hexadecimal(va_arg(args, unsigned int), 0);
            break;
        case 'X':
            printed_chars += _putchar('0') + _putchar('X');
            printed_chars += _print_hexadecimal(va_arg(args, unsigned int), 1);
            break;
        default:
            break;
    }

    return printed_chars;
}


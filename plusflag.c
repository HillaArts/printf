#include "main.h"

int _handle_plus_flag(char specifier, va_list args)
{
    int printed_chars = 0;
    int num = va_arg(args, int);

    if (num >= 0)
    {
        printed_chars += _putchar('+');
    }
    switch (specifier)
    {
        case 'd':
        case 'i':
            printed_chars += _print_int(num);
            break;
        default:
            break;
    }

    return printed_chars;
}


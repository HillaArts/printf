#include "main.h"

/**
 * _print_short - Print a short integer
 * @n: The short integer to print
 *
 * Return: Number of characters printed.
 */
int _print_short(short n)
{
    int printed_chars = 0;

    if (n < 0)
    {
        _putchar('-');
        printed_chars++;
        n = -n;
    }

    if (n == 0)
    {
        _putchar('0');
        printed_chars++;
    }
    else
    {
        short num = n;
        short divisor = 1;

        while (num / divisor >= 10)
            divisor *= 10;

        while (divisor != 0)
        {
            short digit = num / divisor;
            _putchar('0' + digit);
            printed_chars++;
            num %= divisor;
            divisor /= 10;
        }
    }

    return (printed_chars);
}

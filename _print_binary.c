#include "main.h"
/**
 * _print_binary - Print an unsigned integer as binary
 * @n: The unsigned integer to print
 *
 * Return: Number of characters printed.
 */
int _print_binary(unsigned int n)
{
        int printed_chars = 0;
        unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
        int flag = 0;

        while (mask > 0)
        {
        if ((n & mask) || flag)
        {
        _putchar((n & mask) ? '1' : '0');
        printed_chars++;
        flag = 1;
        }
        mask >>= 1;
        }

        if (!printed_chars)
        {
        _putchar('0');
        printed_chars++;
        }

        return (printed_chars);
}


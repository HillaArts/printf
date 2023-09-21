#include "main.h"

static const char uppercase_hex_digits[] = "0123456789ABCDEF";
static const char lowercase_hex_digits[] = "0123456789abcdef";

/**
 * _print_hexadecimal - Print an unsigned integer as a hexadecimal number
 * @n: The unsigned integer to print as hexadecimal
 * @uppercase: 1 to print uppercase letters (A-F), 0 for lowercase (a-f)
 *
 * Return: Number of characters printed.
 */
int _print_hexadecimal(unsigned int n, int uppercase)
{
        int printed_chars = 0;
        const char *hex_digits = (uppercase) ?
                uppercase_hex_digits : lowercase_hex_digits;
        char hex_buffer[100];
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
        hex_buffer[i] = hex_digits[n % 16];
        n /= 16;
        i++;
        }

        for (i--; i >= 0; i--)
        {
        _putchar(hex_buffer[i]);
        printed_chars++;
        }
        }

        return (printed_chars);
}


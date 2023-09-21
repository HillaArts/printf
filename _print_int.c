#include "main.h"
/**
 * _print_int - Print an integer
 * @n: The integer to print
 *
 * Return: Number of characters printed.
 */
int _print_int(int n)
{
	int printed_chars = 0;
	int sign = 1;

	if (n < 0)
	{
	_putchar('-');
	printed_chars++;
	sign = -1;
	}

	if (n == 0)
	{
	_putchar('0');
	printed_chars++;
	}
	else
	{
	int abs_n = (n < 0) ? -n : n;
	int num_len = 0;
	int temp = abs_n;

	while (temp > 0)
	{
	temp /= 10;
	num_len++;
	}

	while (num_len > 0)
	{
	int digit = (abs_n / _pow(10, num_len - 1)) % 10;

	_putchar('0' + (digit * sign));
	printed_chars++;
	num_len--;
	}
	}

	return (printed_chars);
}

/**
 * _pow - Calculate the power of a number
 * @base: The base
 * @exp: The exponent
 *
 * Return: The result of base raised to the power of exp.
 */
int _pow(int base, int exp)
{
	int result = 1;

	while (exp > 0)
	{
	result *= base;
	exp--;
	}
	return (result);
}


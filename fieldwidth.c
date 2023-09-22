#include "main.h"

/**
 * _print_int_with_width - Print an integer with field width
 * @n: The integer to print
 * @width: The field width
 *
 * Return: Number of characters printed
 */
int _print_int_with_width(int n, int width)
{
	int num_chars = 0;
	int temp = n;
	int padding = width - num_chars;
	int i;

	while (temp != 0)
	{
	temp /= 10;
	num_chars++;
	}
	for (i = 0; i < padding; i++)
	{
	_putchar(' ');
	}

	return (_print_int(n));
}

/**
 * _print_string_with_width - Print a string with field width
 * @s: The string to print
 * @width: The field width
 *
 * Return: Number of characters printed
 */
int _print_string_with_width(char *s, int width)
{
	int len = _strlen(s);
	int padding = width - len;
	int i;

	if (s == NULL)
	{
	s = "(null)";

	}
	for (i = 0; i < padding; i++)
	{
	_putchar(' ');
	}

	for (i = 0; i < len; i++)
	{
	_putchar(s[i]);
	}

	return (width);
}

/**
 * _strlen - Calculate the length of a string
 * @s: The string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
	len++;
	}
	return (len);
}


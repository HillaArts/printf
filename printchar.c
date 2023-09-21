#include "main.h"
/**
 * _print_char - print character
 * @c: character to print
 * Return: 1
 */
int _print_char(int c)
{
	_putchar(c);
	return (1);
}

/**
 * _print_string - print string
 * @s: string to print
 * Return: len
 */
int _print_string(char *s)
{
	int len = 0;

	if (s == NULL)
	s = "(null)";

	while (s[len])
	{
	_putchar(s[len]);
	len++;
	}
	return (len);
}


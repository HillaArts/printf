#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);
int _print_string(char *s);
int _print_int(int n);
int _pow(int base, int exp);
int _print_binary(unsigned int n);
int _print_unsigned(unsigned int n);
int _print_hexadecimal(unsigned int n, int uppercase);
int _print_octal(unsigned int n);
int _print_char(int c);
int _putchar(char c);

#endif


#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printf_char(va_list args);
int _putchar(char c);
int printf_string(va_list args);
int _strlen(char *str);
int _strlen_const(const char *str);
int print_unsigned(va_list args);
int print_d(va_list args);
int print_i(va_list args);

#endif

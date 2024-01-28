#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function to print letter/symbols
 *
 * @format: pointer to the format specifiers
 *
 * Return: count
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count = charPrint(count, args);
					break;
				case 's':
					count = strPrint(count, args);
					break;
				case '%':
					count = perPrint(count);
					break;
				default:
					break;
			}
		}
		else
		{
			count += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}

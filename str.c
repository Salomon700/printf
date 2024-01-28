#include <stdio.h>
#include <stdarg.h>

/**
 * strPrint - prints a string
 *
 * @count: count of characters
 * @args: list of strings printed
 *
 * Return: updated count
 */

int strPrint(int count, va_list args)
{
	const char *str = va_arg(args, const char *);

	while (*str)
	{
		count += putchar(*str);
		str++;
	}
	return (count);
}


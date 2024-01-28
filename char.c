#include <stdio.h>
#include <stdarg.h>

/**
 * charPrint - function that prints characters
 *
 * @count: count of the characters printed
 * @args: list containing characters printed
 *
 * Return: updated count
 */

int charPrint(int count, va_list args)
{
	return (count + putchar(va_arg(args, int)));
}


#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int charPrint(int count, va_list args);
int strPrint(int count, va_list args);
int perPrint(int count);

#endif

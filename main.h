#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int charPrint(int count, va_list args);
int strPrint(int count, va_list args);
int perPrint(int count);

#endif

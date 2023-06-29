#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


int _putchar(char c);
int print_dec(va_list args);
int print_int(va_list args);
int print_string(va_list arg);
int printf_char(va_list arg);


#endif

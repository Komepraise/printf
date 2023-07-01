#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - conversion specifiers for printf
 * @id: specifier char pointer
 * @f: type pointer to function of the conversion specifier
 *
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _putchar(char c);
int printf_37(void);
int printf_string(va_list val);
int _strlenc(const char *s);
int *_strcpy(char *dest, char *src);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int _strlen(char *s);
int printf_dec(va_list args);
int printf_int(va_list args);
int printf_exclusive_string(va_list val);
int printf_HEX_aux(unsigned int num);
int printf_rot13(va_list args);
int printf_hex_aux(unsigned long int num);
int printf_pointer(va_list val);
int printf_srev(va_list args);
int printf_bin(va_list val);
int printf_unsigned(va_list args);
int printf_oct(va_list val);
int _printf(const char *format, ...);
int printf_char(va_list val);
int rev_string(char *s);
int _strlenc(const char *s);

#endif

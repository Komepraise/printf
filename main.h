#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int _printf(const char *format, ...);
int _putchar(char c);
int print_dec(va_list args);
int print_int(va_list args);
int print_string(va_list arg);
int print_char(va_list arg);
int print_37(void);
int print_HEX_aux(unsigned int numb);
int print_HEX(va_list arg);
int _strlenc(const char *s);
int _strlen(char *s);
int print_bi(va_list arg);	
int print_hex_aux(unsigned long int numb);
int print_hex(va_list arg);
int print_unsigned(va_list args);
int print_pointer(va_list arg);
int print_rot13(va_list args);
int print_hex_aux(unsigned long int numb);
int print_exclusive_string(va_list arg);
int print_oct(va_list arg);
int print_srev(va_list args);
int *_strcpy(char *dest, char *src);
int rev_string(char *s);


#endif

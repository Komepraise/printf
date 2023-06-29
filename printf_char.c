#include "main.h"

/**
 * printf_char - characters to be printed
 * @val: the args to be considered
 * Return: 1.
 */
int printf_char(va_list val)
{
	char k;

	k = va_arg(val, int);
	_putchar(k);
	return (1);
}

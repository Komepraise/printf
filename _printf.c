#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_%},
		{"%i", print_int}, {"%d", print_dec};

	va_list args;
	int x = 0, x, z = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		x = 13;
		while (x >= 0)
		{
			if (m[x].id[0] == format[x] && m[x].id[1] == format[x + 1])
			{
				z += m[x].f(args);
				x = x + 2;
				goto Here;
			}
			x--;
		}
		_putchar(format[x]);
		z++;
		x++;
	}
	va_end(args);
	return (z);
}

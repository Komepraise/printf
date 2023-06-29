#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @arg: arguments.
 * Return: counter.
 */
int print_pointer(va_list arg)
{
	void *p;
	char *s = "(nil)";
	long int z;
	int y;
	int x;

	p = va_arg(arg, void*);
	if (p == NULL)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			_putchar(s[x]);
		}
		return (x);
	}

	z = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hex_aux(z);
	return (y + 2);
}

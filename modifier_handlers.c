

#include "main.h"

/**
 * print_% - prints per cent sign.
 * Return: 1.
 */
int print_%(void)
{
	_putchar('%');
	return (1);
}


/**
 * print_char - prints a character.
 * @arg: arguments.
 * Return: 1.
 */
int print_char(va_list arg)
{
	char s;

	s = va_arg(arg, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - print a string.
 * @arg: argument.
 * Return: the length of the string.
 */

int print_string(va_list arg)
{
	char *s;
	int x, y;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
		y = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (y);
	}
	else
	{
		y = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (y);
	}
}

/**
 * print_int - prints an integer
 * @args: argument
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int x = va_arg(args, int);
	int y, w = x % 10, a, b = 1;
	int  z = 1;

	x = x / 10;
	y = x;

	if (w < 0)
	{
		_putchar('-');
		y = -y;
		x = -x;
		w = -w;
		z++;
	}
	if (y > 0)
	{
		while (y / 10 != 0)
		{
			b = b * 10;
			y = y / 10;
		}
		y = x;
		while (b > 0)
		{
			a = y / b;
			_putchar(a + '0');
			y = y - (a * b);
			b = b / 10;
			z++;
		}
	}
	_putchar(w + '0');

	return (z);
}

/**
 * print_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_dec(va_list args)
{
	int x = va_arg(args, int);
	int y, w = x % 10, a;
	int  x = 1;
	int b = 1;

	x = x / 10;
	y = x;

	if (w < 0)
	{
		_putchar('-');
		y = -y;
		x = -x;
		w = -w;
		z++;
	}
	if (y > 0)
	{
		while (y / 10 != 0)
		{
			b = b * 10;
			y = y / 10;
		}
		y = x;
		while (b > 0)
		{
			a = y / b;
			_putchar(a + '0');
			y = y - (a * b);
			b = b / 10;
			z++;
		}
	}
	_putchar(w + '0');

	return (z);
}

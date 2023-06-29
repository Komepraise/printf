

#include "main.h"

/**
 * print_% - prints per cent sign.
 * Return: 1.
 */
int print_37(void)
{
	_putchar('%');
	return (1);
}


/**
 * print_char - prints a character.
 * @arg: arguments.
 * B
 * Return: 1.
 */
int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
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
		for (x= 0; x < y; x++)
			_putchar(s[x]);
		return (y);
	}
	else
	{
		y = _strlen(s);
		for (x = 0; x < y; x++)
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
	int z = 1;
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

/**
 * print_bi - prints a binary number.
 * @arg: arguments.
 * Return: 1.
 */
int print_bi(va_list arg)
{
	int flag = 0;
	int cont = 0;
	int x, y = 1, z;
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int p;

	for (x = 0; x < 32; x++)
	{
		p = ((y << (31 - x)) & num);
		if (p >> (31 - x))
			flag = 1;
		if (flag)
		{
			z = p >> (31 - x);
			_putchar(z + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}

/**
 * print_oct - prints an octal number.
 * @arg: arguments.
 * Return: count.
 */
int print_oct(va_list arg)
{
	int x;
	int *arr;
	int count = 0;
	unsigned int numb = va_arg(arg, unsigned int);
	unsigned int temp = numb;

	while (numb / 8 != 0)
	{
		numb /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		arr[x] = temp % 8;
		temp /= 8;
	}
	for (x = count - 1; x >= 0; x--)
	{
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (count);
}

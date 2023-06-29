#include "main.h"
/**
 * print_unsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int numb, z = n % 10, dig, y = 1;
	int  x = 1;

	n = n / 10;
	numb = n;

	if (z < 0)
	{
		_putchar('-');
		numb = -numb;
		n = -n;
		z = -z;
		x++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			y = y * 10;
			numb = numb / 10;
		}
		numb = n;
		while (y > 0)
		{
			dig = numb / y;
			_putchar(dig + '0');
			numb = numb - (dig * y);
			y = y / 10;
			x++;
		}
	}
	_putchar(z + '0');

	return (x);
}

#include "main.h"

/**
 * print_HEX - prints an hexgecimal number.
 * @arg: arguments.
 * Return: coun.
 */
int print_HEX(va_list arg)
{
	int x;
	int *arr;
	int count = 0;
	unsigned int numb = va_arg(arg, unsigned int);
	unsigned int temp = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = count - 1; x  >= 0; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 7;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (count);
}

/**
 * print_HEX_aux - prints an hexgecimal number.
 * @numb: number to print.
 * Return: counter.
 */
int print_HEX_aux(unsigned int numb)
{
	int x;
	int *arr;
	int count = 0;
	unsigned int temp = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = count - 1; x >= 0; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 7;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (count);
}

/**
 * print_hex - prints an hexgecimal number.
 * @arg: arguments.
 * Return: count.
 */
int print_hex(va_list arg)
{
	int x;
	int *arr;
	int count = 0;
	unsigned int numb = va_arg(arg, unsigned int);
	unsigned int temp = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = count - 1; x >= 0; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 39;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (count);
}

/**
 * print_hex_aux - prints an hexgecimal number.
 * @numb: arguments.
 * Return: count.
 */
int print_hex_aux(unsigned long int numb)
{
	long int x;
	long int *arr;
	long int count = 0;
	unsigned long int temp = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));

	for (x = 0; x < count; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = count - 1; x >= 0; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 39;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (count);
}

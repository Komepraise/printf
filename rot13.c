#include "main.h"
/**
 * print_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: count
 *
 */
int print_rot13(va_list args)
{
	int x, y, count = 0;
	int z = 0;
	char *s = va_arg(args, char*);
	char alp[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bet[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x]; x++)
	{
		z = 0;
		for (y = 0; alp[y] && !z; y++)
		{
			if (s[x] == alp[y])
			{
				_putchar(bet[y]);
				count++;
				z = 1;
			}
		}
		if (!z)
		{
			_putchar(s[x]);
			count++;
		}
	}
	return (count);
}

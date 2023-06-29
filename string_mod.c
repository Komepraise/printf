#include "main.h"
/**
 * print_exclusive_string - print exclusuives string.
 * @arg: argumen t.
 * Return: the length of the string.
 */

int print_exclusive_string(va_list arg)
{
	char *s;
	int x, len = 0;
	int y;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] < 32 || s[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			y = s[x];
			if (y < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_aux(y);
		}
		else
		{
			_putchar(s[x]);
			len++;
		}
	}
	return (len);
}


/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: x.
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	return (x);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: x
 */
int _strlenc(const char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	return (x);
}

/**
 * print_srev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int print_srev(va_list args)
{

	char *s = va_arg(args, char*);
	int x;
	int y = 0;

	if (s == NULL)
		s = "(null)";
	while (s[y] != '\0')
		y++;
	for (x = y - 1; x >= 0; x--)
		_putchar(s[x]);
	return (y);
}

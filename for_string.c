#include <unistd.h>
#include "main.h"
/**
 * _putstring - writes a string
 * @s: The character to print
 *
 * Return: number of characters in string
 */
int _putstr(char *s)
{
	int el = 0, ret_val = 0;

	if (s)
	{
		while (s[el] != '\0')
		{
			_putchar(s[el]);
			ret_val += 1;
			el++;
		}
	}
	return (ret_val);


}


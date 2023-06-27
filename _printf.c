#include "head.h"

int _printf(const char *format, ...)
{
	unsigned int var = 0, val = 0;
	va_list args;

	va_start(args, format);

	for (; format[str] != '\0'; str++)
	{
		if (format[str] != '%')
		{
			_putchar(format[str]);
		}
		else if (format[str + 1] =='c')
		{
			_putchar(va_arg(args, int));
			var++;
		}
		else if (format[str + 1] == 's')
		{
			for_string(va_arg(argd, char *))
		}
		_putchar(format[str]);
		val += 1;
	}
	return (str);
}


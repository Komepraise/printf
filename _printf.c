#include "main.h"
/**
 * _printf - selects function to be printed to standard output
 * @format: format identfier
 * Return: string lenght
 */
int _printf(const char *format, ...)
{
	unsigned int_int = 0, ret_val = 0;
	va_list arg_no;
	va_start(arg_no, format);

	for(; format[int_int] != '\0'; int_int++)
	{
		if(format[int_int] != '%')
		{
			_putchar(format[int_int]);
		}
		else if (format[int_int] == 'c')
		{
			_putchar(va_arg(arg_no, int));
			int_int++;	
		}
		else if (format[int_int] == 's')
		{
			int ret_st = _putstr(va_arg(arg_no, char *));
			int_int++;
			ret_val += (ret_st - 1);
		}
		else if (format[int_int] == '%')
		{
			_putchar('%');
		}
			ret_val += 1;
	}
		return (ret_val);


}

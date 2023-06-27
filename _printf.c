#include "main.h"
#include <stdarg.h>
#include <unistd.h>

<<<<<<< HEAD
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
=======
/**
  * selectFormat - chose format specifier for the _printf
  * @format: pointer to format character string
  *
  * Return: function or NULL
  */
int (*selectFormat(const char *format))(va_list)
{
	unsigned int i = 0;
	f_spec format_list[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"i", _print_int},
		{"d", _print_dec},
		{"r", _print_rev},
		{"b", _print_bin},
		{"u", _print_unsigned},
		{"o", _print_octal},
		{"x", _print_x},
		{"X", _print_X},
		{"R", _print_rot13},
		{NULL, NULL}
	};

	while (format_list[i].fp)
	{
		if (format_list[i].fp[0] == (*format))
			return (format_list[i].f);
		i++;
	}
	return (NULL);
>>>>>>> ebc506eea5264a1463caa9c4804dee229303a09f
}

/**
  * _printf - produces output based on the format
  * @format: char string - which can be 0 or more directives
  *
  * Return: the string lenght
  */
int _printf(const char *format, ...)
{
	va_list arg;
	int (*f)(va_list);
	unsigned int i = 0, arg_string = 0;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			arg_string++;
			i++;
		}

		if (format[i] == '\0')
			return (arg_string);

		f = selectFormat(&format[i + 1]);
		if (f != NULL)
		{
			arg_string += f(arg);
			i += 2;
			continue;
		}

		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		arg_string++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}

	va_end(arg);
	return (arg_string);
}

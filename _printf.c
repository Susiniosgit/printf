#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: input argument types for output format.
 * Return: the number of characters printed or in case of error -1.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0;
	va_list arg;

	va_start(arg, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	for (; format[i] != '%' && format[i] != '\0'; i++, j++)
	{
		_putchar(format[i]);
	}	
	switch (format[i + 1])
	{
		case 'c':
			i++;
			j += print_c(arg);
			i++;
			break;
		case 's':
			i++;
			j += print_s(arg);
			i++;
			break;
		case 'd':
			i++;
			j += print_numd(arg);
			i++;
			break;
		case 'i':
			i++;
			j += print_numd(arg);
			i++;
			break;
		case 'o':
			i++;
			j += print_numo(arg);
			i++;
			break;
		case 'x':
			i++;
			j += print_numx(arg);
			i++;
			break;
		case 'u':
			i++;
			j += print_numu(arg);
			i++;
			break;
		default:
			break;
		i++;
		}
	while (format[i] != '\0')
	{
		_putchar(format[i]);
		j++;
		i++;
	}
	va_end(arg);
	return (j);
}

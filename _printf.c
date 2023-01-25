#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - produces output according to format
 * @format: format specifications
 * Return: Allow success
*/
int _printf(const char *format, ...)
{
	va_list input;
	int i = 0, j = 0;
	
	va_start(input, format);
	if (format == NULL)
		return (-1);
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) != '%')
			_putchar(*(format + i), &j);
		else if (*(format + i) == '%')
		{
			i++;
			switch (*(format + i))
			{
				case 'c':
					_putchar(va_arg(input, int), &j);
				case 's':
					_putstring(va_arg(input, char *), &j);
				case '%':
					_putchar(va_arg(input, int), &j);
				case 'i':
					_putnum(va_arg(input, int), &j);
					break;
				default:
					break;
			}
		}
	}
	va_end(input);
	return (j);
}

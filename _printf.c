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

	if (format == NULL)
		return (-1);
	va_start(input, format);
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) != '%')
		{
			_putchar(*(format + i++), &j);

		}
			i++;
		switch (*(format + i))
		{
			case 'c':
				_putchar(va_arg(input, int), &j);
				break;
			case 's':
				_putstring(va_arg(input, char *), &j);
				break;
			case '%':
				_putchar(va_arg(input, int), &j);
				break;
			case 'i':
				_putnum(va_arg(input, int), &j);
			default:
				break;
		}
	}
	va_end(input);
	return (j);
}

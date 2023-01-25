#include "main.h"
/**
 * _putstring - prints string
 * @str: string to be printed
 * @k: number of characters
 * Return: Allow success
*/
void _putstring(const char *str, int *k)
{
	if (str == NULL)
	{
		_putchar('(', k);
		_putchar('n', k);
		_putchar('u', k);
		_putchar('l', k);
		_putchar('l', k);
		_putchar(')', k);
	}
	else
	{
		while (*str)
			_putchar(*str++, k);
	}
}

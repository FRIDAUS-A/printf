#include <unistd.h>
#include "main.h"
/**
 * _putstring - prints string
 * @str: string to be printed
 * Return: Allow success
*/
void _putstring(char *str, int *k)
{
	if (str == NULL)
	{
		_putchar('N', k);
		_putchar('U', k);
		_putchar('L', k);
		_putchar('L', k);
	}
	while (*str)
		_putchar(*str++, k);
}

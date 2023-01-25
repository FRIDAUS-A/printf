#include <unistd.h>
#include "main.h"
/**
 * _putstring - prints string
 * @str: string to be printed
 * @k: number of characters
 * Return: Allow success
*/
void _putstring(const char *str, int *k)
{
	if (str != NULL)
	{
		while (*str)
			_putchar(*str++, k);
	}
}

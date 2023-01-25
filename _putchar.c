#include "main.h"

/**
 * _putchar - prints character
 * @c: character to be printed
 * @k: number of characters
 * Return: Allow success
*/
int _putchar(char c, int *k)
{
	*k = *k + 1;
	return (write(1, &c, 1));
}

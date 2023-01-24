#include <unistd.h>

/**
 * _putchar - prints character
 * @c: character to be printed
 * Return: Allow success
*/
int _putchar(char c, int *k)
{
	*k = *k + 1;
	return (write(1, &c, 1));
}

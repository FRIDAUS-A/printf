#include "main.h"
/**
 * _putnum - prints number
 * @num: number
 * @k: address of a variable
 * Return: Allow success
*/
void _putnum(int num, int *k)
{
	int a;

	if (num < 0)
	{
		_putchar('-', k);
		num = -1 * num;
	}
	a = num;
	if (num > 9)
	{
		_putnum(num / 10, k);
	}
	_putchar(a % 10 + '0', k);
}

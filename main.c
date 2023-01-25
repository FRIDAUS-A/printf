#include "main.h"
#include <stdio.h>

int main(void)
{
	int d, p;
	d = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	p = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("%d\n%d\n%%", d, p);
	printf("NULL");
	return (0);
}

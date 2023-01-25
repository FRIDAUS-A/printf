#include "main.h"
#include <stdio.h>

int main(void)
{
	int d, p;
	d = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	p = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%d\n%d\n%%", d, p);
	printf("NULL");
	return (0);
}

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c, int *k);
void _putstring(const char *str, int *k);
void _putnum(int num, int *k);
int _printf(const char *format, ...);

#endif /* MAIN_H */

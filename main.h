#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void _puts2(char *str);
int _putchar(char c);
int print_c(va_list list);
int print_s(va_list list);
char *convert(unsigned int num, int base);
int print_numd(va_list list);
int print_numo(va_list list);
int print_numx(va_list list);
int print_numu(va_list list);
#endif /*MAIN_H */

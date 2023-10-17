#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char  *format, ...);
int spec(char specifier, va_list args);
int print_str(char *str);
int print_num(long int num, int base);
int print_HEX(long int num, int base);
int print_uns(long int num);
int print_rev(char *str);
int print_rot13(char *a);
int print_S(char *a);

#endif /*MAIN_H*/

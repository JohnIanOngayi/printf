#include "main.h"
/**
 * spec - relates format specifiers to relevant functions
 * @specifier: format specifier
 * @args: variable argument passed to _printf
 * Return: no of characters printed
 */
int spec(char specifier, va_list args)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += _putchar(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_num((long)va_arg(args, int), 10);
	else if (specifier == 'x')
		count += print_num((long)va_arg(args, unsigned int), 16);
	else if (specifier == 'X')
		count += print_HEX((long)va_arg(args, unsigned int), 16);
	else if (specifier == 'o')
		count += print_num((long)va_arg(args, unsigned int), 8);
	else if (specifier == 'u')
		count += print_uns((long)va_arg(args, unsigned int));
	else if (specifier == 'r')
		count += print_rev(va_arg(args, char *));
	else if (specifier == 'R')
		count += print_rot13(va_arg(args, char *));
	else if (specifier == 'b')
		count += print_num((long)va_arg(args, int), 2);
	else if (specifier == 'S')
		count += print_S(va_arg(args, char *));
	else
		count += write(1, &specifier, 1);
	return (count);
}

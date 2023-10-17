#include "main.h"
/**
 * print_num - prints a number
 * @num: the number being printed
 * @base: the base of the number
 * Return: number of characters printed
 */
int print_num(long int num, int base)
{
	int count;
	char *hex = "0123456789abcdef";

	count = 0;
	if (num < 0)
	{
		_putchar('-');
		return (1 + print_num(-num, base));
	}
	else if (num < base)
		return (_putchar(hex[num]));
	count = print_num(num / base, base);
	return (count + print_num(num % base, base));
}

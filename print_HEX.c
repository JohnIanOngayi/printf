#include "main.h"
/**
 * print_HEX - prints a number
 * @num: the number being printed
 * @base: the base of the number
 * Return: number of characters printed
 */
int print_HEX(long int num, int base)
{
	int count;
	char *hex_upper = "0123456789ABCDEF";

	count = 0;
	if (base < 2 || base > 16)
		return (-1);
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num < base)
	{
		_putchar(hex_upper[num]);
		count++;
	}
	else
	{
		count += print_HEX(num / base, base);
		_putchar(hex_upper[num % base]);
		count++;
	}
	return (count);
}

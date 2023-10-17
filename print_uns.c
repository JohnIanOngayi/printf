#include "main.h"
/**
 * print_uns - prints an unsigned integer
 * @num: unsigned integer to print
 * Return: number of characters printed
 */
int print_uns(long int num)
{
	int count;

	count = 0;
	if (num < 0)
		num = -num;
	if (num / 10)
		count += print_uns(num / 10);
	count += _putchar(num % 10 + '0');
	return (count);
}

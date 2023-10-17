#include "main.h"
/**
 * print_str - prints a string
 * @str: string to print
 * Return: number of characters printed
 */
int print_str(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		++str;
		++len;
	}
	return (len);
}

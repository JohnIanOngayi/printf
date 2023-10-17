#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: string to print
 * Return: number of characters printed
 */
int print_rev(char *str)
{
	int len;
	int count;
	char *str_copy = str;

	len = 0;
	count = 0;
	if (!str)
		return (-1);
	while (*str_copy != '\0')
	{
		str_copy++;
		len++;
	}
	while (len > 0)
	{
		str_copy--;
		count += _putchar(*str_copy);
		len--;
	}
	return (count);
}

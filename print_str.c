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

	if (str == NULL)
	{
		str = "";
	}

	while (*str != '\0')
	{
		if (*str >= 32 && *str < 127)
		{
			_putchar(*str);
			++len;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			if (*str < 16)
			{
				_putchar('0');
				len++;
			}
			len += 2;
			len += print_HEX(*str);
		}
		str++;
	}
	return (len);
}

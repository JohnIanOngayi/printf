#include "main.h"
/**
 * print_S - prints string with special characters
 * @str: string to be printed
 * Return: no of characters to be printed
 */
int print_S(char *str)
{
	int hex_len;
	char hex[4];
	int i;

	hex_len = 0;
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			_putchar(*str);
		else
		{
			hex[0] = '\\';
			hex[1] = 'x';
			hex[2] = "0123456789ABCDEF"[(*str >> 4) & 0xF];
			hex[3] = "0123456789ABCDEF"[*str & 0xF];
			for (i = 0; i < 4; i++)
				_putchar(hex[i]);
			hex_len += 4;
		}
		str++;
		hex_len++;
	}
	return (hex_len);
}

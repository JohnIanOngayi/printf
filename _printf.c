#include "main.h"
#include <stdbool.h>
/**
 * _printf - emulates printf
 * @format: string containing format specifiers
 * Return: 0, success -1 for fail
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;
	bool error;
	int result;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);
	count = 0;
	error = false;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				error = true;
				break;
			}
			result = spec(*format, args);
			if (result == -1)
			{
				error = true;
				break;
			}
			count += result;
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	if (error)
		return (-1);
	return (count);
}

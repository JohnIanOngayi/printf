#include "main.h"
/**
 * print_rot13 - encodes a string in ROT-13
 * @a: the string being encoded
 * Return: a pointer to the encoded string
 */
int print_rot13(char *a)
{
	int i;
	int j;
	int rot_len;
	char *def = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	rot_len = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			for (j = 0; j < 52; j++)
			{
				if (a[i] == def[j])
				{
					a[i] = rot[j];
					break;
				}
			}
		}
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
		rot_len++;
	}
	return (rot_len);
}

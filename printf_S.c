#include "main.h"
/**
 * printf_S - prints a string with non-printable characters
 * @list: arguments
 * Return: string length
 */

int printf_S(va_list list)
{
	char *s;
	int i, input_size;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		s = "(null)";
		input_size = _strlen(s);
		for (i = 0; i < input_size; i++)
			_putchar(s[i]);
		return (input_size);
	}
	else
	{
		input_size = _strlen(s);
		for (i = 0; i < input_size; i++)
		{
			if (s[i] < 32 || s[i >= 127])
			{
				_putchar(s[i]);
			}
			_putchar(s[i]);
		}
		return (input_size);
	}
}

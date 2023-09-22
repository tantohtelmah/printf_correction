#include "main.h"
/**
 * printf_string - prints a string
 * @list: arguments
 * Return: string length
 */

int printf_string(va_list list)
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
			_putchar(s[i]);
		return (input_size);
	}
}

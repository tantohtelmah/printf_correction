#include "main.h"

/**
 * printf_char - prints a character
 * @list: character
 * Return: 1 for success
 */
int printf_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}

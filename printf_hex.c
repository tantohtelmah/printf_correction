#include "main.h"
/**
 * printf_hex - prints integers
 * @list: va_list
 * Return: 1 for success
 */
int printf_hex(va_list list)
{
	int count = 0;
	int64_t hexa;

	hexa = va_arg(list, int64_t);
	hex_converter(hexa, &count);
	return (count);
}

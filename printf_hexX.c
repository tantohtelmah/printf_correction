#include "main.h"
/**
 * printf_hexX - prints integers
 * @list: va_list
 * Return: count for success
 */
int printf_hexX(va_list list)
{
	int count = 0;
	int64_t hexaX;

	hexaX = va_arg(list, int64_t);
	hex_converterX(hexaX, &count);
	return (count);
}

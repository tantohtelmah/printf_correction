#include "main.h"

/**
 * printf_address - prints the address
 * @list: char
 * Return: int
*/

int printf_address(va_list list)
{
	int64_t addr;
	int count = 0;

	addr = va_arg(list, int64_t);
	_putchar('0');
	_putchar('x');
	count += 2;
	hex_converter(addr, &count);
	return (count);
}

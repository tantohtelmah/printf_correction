#include "main.h"
/**
 * printf_int - prints integers
 * @list: va_list
 * Return: number length
 */
int printf_int_short(va_list list)
{
	short number = va_arg(list, short);
	int remainder = number % 10;
	int digit, quotient;
	int count = 1;
	int power = 1;

	number = number / 10;
	quotient = number;

	if (remainder < 0)
	{
		_putchar('-');
		quotient = -quotient;
		number = -number;
		remainder = -remainder;
		count++;
	}
	if (quotient > 0)
	{
		while (quotient / 10 != 0)
		{
			power = 10 * power;
			quotient = quotient / 10;
		}
		quotient = number;
		while (power > 0)
		{
			digit = quotient / power;
			_putchar(digit + '0');
			quotient = quotient - (power * digit);
			power = power / 10;
			count++;
		}
	}
	_putchar(remainder + '0');

	return (count);
}


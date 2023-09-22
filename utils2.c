#include "main.h"
/**
 * binary_conversion - converts from base 10 to others and prints results
 * @bi_num: int
 * @counter: int
 * Return: none
*/
void binary_conversion(int64_t bi_num, int *counter)
{
	if (bi_num == 0)
	{
		_putchar('0');
		*counter += 1;
	}
	binary_conversion(bi_num / 2, counter);
	_putchar(bi_num % 2 + '0');
	*counter += 1;
}

/**
 * unsigned_con - converts from base 10 to others and prints results
 * @num: int
 * @counter: int
 * Return: none
*/
void unsigned_con(int64_t num, int *counter)
{
	if (num >= 0 && num <= 9)
	{
		_putchar(num + '0');
		*counter += 1;
		return;
	}
	else
	{
		/* print the leftmost digits first */
		unsigned_con(num / 10, counter);

		/* print the rightmost digit */
		_putchar(num % 10 + '0');
		*counter += 1;
	}
}

/**
 * base_conversion8 - converts from base 10 to 8 and prints results
 * @number: int
 * @base: int
 * @counter: int
 * Return: none
*/
void base_conversion8(int64_t number, int base, int *counter)
{
	if (number >= 0 && number <= 9)
	{
		_putchar(number + '0');
		*counter += 1;
		return;
	}
	else
	{
		/* print the leftmost digits first */
		base_conversion(number / base, base, counter);

		/* print the rightmost digit */
		_putchar(number % base + '0');
		*counter += 1;
	}
}


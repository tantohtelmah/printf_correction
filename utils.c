#include "main.h"

void init_opts(short *options)
{
	options[o_flag] = 0;
	options[o_width] = 0;
	options[o_pres] = 0;
	options[o_len] = 0;
	options[o_conv] = 0;
}

void init_opt_vals(option *options)
{
	options->hash =  0;
	options->minus = 0;
	options->plus = 0;
	options->presion = 0;
	options->space = 0;
	options->width = 0;
	options->zero = 0;
	options->_long = 0;
	options->_short = 0;
}

/**
 * _strlen - calculates length of a string
 * @s: char pointer
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != 0)
		len++;
	return (len);
}

/**
 * _strlenconst - calculates length of a string but for a constant char
 * @s: char pointer
 * Return: length
 */
int _strlenconst(const char *s)
{
	int len = 0;

	while (s[len] != 0)
		len++;
	return (len);
}

/**
 * hex_converter - converts decimals to hexadecimals in lowercase
 * @n: int64_t
 * @counter: int
 * Return: integer
*/
void hex_converter(int64_t n, int *counter)
{
	int rem;

	if (n < 10)
	{
		_putchar(n + '0');
		*counter += 1;
	}
	else
	{
		hex_converter(n / 16, counter);
		rem = n % 16;
		if (rem < 10)
			_putchar(rem + '0');
		else
			_putchar(rem - 10 + 'a');
		*counter += 1;
	}
}

/**
 * hex_converterX - converts decimals to hexadecimals in uppercase
 * @n: int64_t
 * @counter: int
 * Return: integer
*/
void hex_converterX(int64_t n, int *counter)
{
	int64_t rem;

	if (n < 10)
	{
		_putchar(n + '0');
		*counter += 1;
	}
	else
	{
		hex_converter(n / 16, counter);
		rem = n % 16;
		if (rem < 10)
			_putchar(rem + '0');
		else
			_putchar(rem - 10 + 'A');
		*counter += 1;
	}
}

/**
 * base_conversion - converts from base 10 to others and prints results
 * @number: int
 * @base: int
 * @counter: int
 * Return: none
*/
void base_conversion(int number, int base, int *counter)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
		*counter += 1;
	}
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




#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

#define FLAGS "#0-+ "
#define CONVERSION "cdipuxXsSrRob"
#define LENGTH_MODIFIER "lh"

/**
 * struct _format - structure
 * @type: char
 * @f: int (function pointer)
*/
typedef struct _format
{
	char *type;
	int (*f)();
} input_form;

typedef struct options
{
	int hash;
	int plus;
	int minus;
	int space;
	int zero;
	int width;
	int presion;
	int _short;
	int _long;
} option;

typedef enum opt
{
	o_flag, o_width, o_pres, o_len, o_conv
} opt;

int _putchar(char c);

int _printf(const char *format, ...);
int printf_percent(void);
int printf_string(va_list list);
int printf_char(va_list list);
int printf_address(va_list list);
int printf_hex(va_list list);
int printf_hexX(va_list list);
int printf_int(va_list list);
int printf_decimal(va_list list);
int printf_binary(va_list list);
int printf_octal(va_list list);
int printf_unsigned_int(va_list list);
int printf_int_short(va_list list);

/* structDeclare */
void pattern(void);

/* putchar.c */

int buffering(char);

/*utils.c */
void init_opts(short *options);
void init_opt_vals(option *options);

int _strlen(char *s);
int _strlenconst(const char *s);
void hex_converterX(int64_t n, int *counter);
void hex_converter(int64_t n, int *counter);
void base_conversion(int number, int base, int *counter);

/*utils2.c*/
void base_conversion8(int64_t number, int base, int *counter);
void binary_conversion(int64_t bi_num, int *counter);
void unsigned_con(int64_t num, int *counter);



#endif /* MAIN_H */

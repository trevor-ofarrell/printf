#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
/**
 * struct ops - struct for va_list functions
 * @ch: char
 * @ptr: function ptr type void
 *
 */
struct ops
{
	char *ch;
	int (*ptr)(va_list);
};
typedef struct ops op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int p_char(va_list);
int p_int(va_list list);
int p_dub(va_list);
int p_mod(va_list);
int p_str(va_list);
int printnum(int m);

#endif

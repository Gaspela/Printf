#include "holberton.h"

int _printf_char(va_list arguments)
{
	char char_to_print = (char) va_arg(arguments, int);
	_putchar(char_to_print);
	return (1);
}

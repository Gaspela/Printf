#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * Libraries
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * Structures
 */

/**
 * struct printfDataType - Struct printfDataType
 *
 * @dataType: especial characters in printf
 * @f: The function associated
 */
typedef struct printfDataType
{
	char *dataType;
	int (*function_printf)(va_list);
} printf_DT;

/**
 * functions
 */
int _printf(const char *format, ...);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int (*get_ptf_func(const char *s, int pos))(va_list);
/**
 * printf data type functions
 */
int _printf_char(va_list arguments);
int _printf_string(va_list arguments);
int _printf_numbers(va_list arguments);
int _printf_binary(va_list arguments);
/**
 * extras functions
 */
int lengthArray(char *array);
int _printf_numbers_recursion(int number);
int _printf_binary_recursion(unsigned int number);

#endif /* HOLBERTON_H */

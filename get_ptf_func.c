#include "holberton.h"
/**
 * get_ptf_func - grt the specific function to print
 * @s: operator
 *
 * Return: pointer function
 */
int (*get_ptf_func(const char *s, int pos))(va_list)
{
	int i;
	printf_DT fnPrint[] = {
		{"c", _printf_char},
		{"s", _printf_string},
		{"d", _printf_numbers},
		{"i", _printf_numbers},
		{"b", _printf_binary},
		{NULL, NULL}
	};

	i = 0;

	while (fnPrint[i].dataType != NULL)
	{
		char character = s[pos + 1];
		char *pChar =  malloc(2);

		*(pChar) = character;
		*(pChar + 1) = '\0';

		if (_strcmp(pChar, fnPrint[i].dataType) == 0)
		{
			free(pChar);
			return (fnPrint[i].function_printf);
		}

		free(pChar);
		i++;
	}

	return (NULL);
}
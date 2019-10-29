#include "holberton.h"
/**
 * _printf_hexadecimalh - print hexadecimal lower case
 * @arguments: Value arguments list.
 *
 * Return: cnt
 */
int _printf_hexadecimalh(va_list arguments)
{
	char hexa[15] =	{'1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	unsigned int number = va_arg(arguments, unsigned int);
	int cnt = 0;

	if (number < 10)
	{
		_putchar('0' + number);
		return (1);
	}
	else if (number < 16)
	{
		_putchar('0' + (number / 10));
		_putchar('0' + (number % 10));
		return (2);
	}
	else
	{
		cnt = _printf_hexadecimal_character(number, hexa);
	}

	return (cnt);
}
/**
 * _printf_hexadecimalH - print hexadecimal upper case
 * @arguments: Value arguments list.
 *
 * Return: cnt
 */
int _printf_hexadecimalH(va_list arguments)
{
	char hexa[15] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	unsigned int number = va_arg(arguments, unsigned int);
	int cnt = 0;

	if (number < 10)
	{
		_putchar('0' + number);
		return (1);
	}
	else if (number < 16)
	{
		_putchar('0' + (number / 10));
		_putchar('0' + (number % 10));
		return (2);
	}
	else
	{
		cnt = _printf_hexadecimal_character(number, hexa);
	}

	return (cnt);
}
/**
 * _printf_hexadecimal_character - printf characters
 * @number: number to convert
 * @hexa: caracteres
 *
 * Return: cnt
 */
int _printf_hexadecimal_character(unsigned int number, char hexa[])
{

	unsigned int div, mod;
	int cnt = 0;

	if (number != 0)
	{
		div = number / 16;
		mod = number % 16;
		cnt++;
		cnt += _printf_hexadecimal_character(div, hexa);
		if (mod != 0)
		{
			_putchar(hexa[mod - 1]);
		}
		else
		{
			_putchar('0');
		}
	}

	return (cnt);
}

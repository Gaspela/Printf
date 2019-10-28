#include "holberton.h"
/**
 * _printf_numbers - Function valid number dex to int.
 * @arguments: Value arg to list.
 *
 * Return: cnt.
*/
int _printf_numbers(va_list arguments)
{
	int number = va_arg(arguments, int), cnt = 0;

	if (number < 0)
	{
		number = number * (-1);
		_putchar('-');
		cnt++;
	}

	if (number < 10)
	{
		_putchar('0' + number);
		cnt++;
		return (cnt);
	}

	cnt = _printf_numbers_recursion(number);

	return (cnt);
}
/**
 * _printf_numbers_recursion - Funtion value number.
 * @number: Value int.
 *
 * Return: cnt.
*/
int _printf_numbers_recursion(int number)
{
	int new_number = number / 10;
	int prt_number = number % 10;
	int cnt = 0;

	if (new_number != 0)
	{
		cnt += _printf_numbers_recursion(new_number);
		cnt++;
		_putchar('0' + prt_number);
	}
	else
	{
		cnt++;
		_putchar('0' + number);
	}

	return (cnt);
}

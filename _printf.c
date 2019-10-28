#include "holberton.h"

int _printf(const char *format, ...)
{
	int cntFrt = 0, linesCnt = 0;
	va_list arguments;

	if (!format)
		return (-1);

	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	va_start(arguments, format);

	while (*(format + cntFrt))
	{
		if (*(format + cntFrt) == '%')
		{
			if (get_ptf_func(format, cntFrt) != NULL)
			{
				linesCnt += (get_ptf_func(format, cntFrt))(arguments);
				cntFrt++;
			}
			else
			{
				linesCnt++;
				_putchar(*(format + cntFrt));
			}
		}
		else
		{
			linesCnt++;
			_putchar(*(format + cntFrt));
		}

		cntFrt++;
	}

	va_end(arguments);

	return (linesCnt);
}

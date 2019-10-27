#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct intype
{

	char *s;
	void (*pt)();

} functions;

int _printf(const char *format, ...);

#endif /* HOLBERTON_H */

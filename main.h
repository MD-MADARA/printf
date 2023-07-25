#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *, ...);
int _strlen(const char *str);
int handle_format(const char *, va_list);
int _putchar(char c);
int print_percent(va_list);
int print_character(va_list);
int print_string(va_list);

/**
 * struct types - formats types struct
 * @type: Format
 * @f: The function associated
 */
typedef struct types
{
	char type;
	int (*f)(va_list);
} types;

#endif

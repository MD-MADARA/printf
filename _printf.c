#include "main.h"
/**
 * _printf -  a function that produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed;

	if (!format)
		return (-1);
	if (_strlen(format) == 0)
		return (0);
	va_start(args, format);
	printed = handle_format(format, args);
	va_end(args);

	return (printed);
}

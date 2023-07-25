#include "main.h"
/**
 * print_string - print string to stdout
 * @args: list of arguments
 *
 * Return: number of printed characters
 */
int print_string(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}

#include "main.h"
/**
 * print_character -  print character to stdout
 * @args: list of arguments
 *
 * Return: number of printed characters
 */
int print_character(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (_putchar(c));
}

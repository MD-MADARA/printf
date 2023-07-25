#include "main.h"
/**
 * handle_format - handle format of printf argument
 * @format: the format to handle
 * @list: list of arguments
 *
 * Return: the number of printed characters
 */
int handle_format(const char *format, va_list list)
{
	int i, j, n, printed = 0;
	types formats[] = {
		{'%', print_percent},
		{'c', print_character},
		{'s', print_string},
		{'\0', NULL},
	};

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			for (j = 0; formats[j].f; j++)
			{
				if (format[i] == formats[j].type)
				{
					n = formats[j].f(list);
					if (n == -1)
						return (-1);
					printed += n;
				}
			}
			return (-1);
		}
		else
			printed += _putchar(format[i]);
	}
	return (printed);
}

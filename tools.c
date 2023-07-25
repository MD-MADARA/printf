#include "main.h"
/**
 * _strlen - a function that returns the len of string
 * @str: the string
 *
 * Return: the len of the string
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

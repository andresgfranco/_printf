#include "holberton.h"
/**
  * _printf - produces output according to a format
  * @format: character string
  * Return: number of printed characters
**/
int _printf(const char *format, ...)
{
	va_list valist;
	int printedCharacters;

	va_start(valist, format);

	if (format == NULL)
		return (-1);
	printedCharacters = format_reader(va_list valist, const char *format);

	va_end(valist);
	return (prc);
}


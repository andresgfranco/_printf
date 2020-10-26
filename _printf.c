#include "holberton.h"

int format_reader(va_list valist, const char *format);

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
	printedCharacters = format_reader(valist, format);

	va_end(valist);
	return (printedCharacters);
}
/**
  * format_reader - function that will compare the format with our instructions
  * @format: format provided by the main _printf function
  * @valist: valist argument provided by the main _printf function
  * Return: number of printed characters
**/
int format_reader(va_list valist, const char *format)
{
	int i = 0, j = 0, printedCharacters = 0;
	func_prtf dataType[] = {{"c", prtf_c}, {"s", prtf_s}, {"d", prtf_int},
		{"i", prtf_int}, {"r", prtf_rev}};

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '%')
			{
				printedCharacters += _putchar ('%');
				i++;
			}
			else if (format[i + 1] == ' ')
			{
				while (format[i + 1] == ' ')
					i++;
				printedCharacters += _putchar('%');
				printedCharacters += _putchar(' ');
			}
			else
			{
				for (j = 0; j < 5; j++)
				{
					if (format[i + 1] == dataType[j].frm[0])
					{
						printedCharacters += dataType[j].func(valist);
						i++;
						break;
					}
				}
				if (j == 5)
					printedCharacters += _putchar('%');
			}
		}
		else
			printedCharacters += _putchar (format[i]);
		i++;
	}
	return (printedCharacters);
}

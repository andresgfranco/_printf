#include "holberton.h"

/**
 *prtf_c - prints a character
 *@valist: va_list variable
 *Return: prints given number of characters
 */

int prtf_c(va_list valist)
{
	_putchar(va_arg(valist, int));
	return (1);
}

/**
 *prtf_s - prints a string
 *@valist: va_list variable
 *Return: prints a given string
 */

int prtf_s(va_list valist)
{
	int i;
	char *s = va_arg(valist, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

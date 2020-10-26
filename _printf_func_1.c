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

/**
 *prtf_int - prints integer
 *@valist: va_list variable
 *Return: prints given number of integers
 */

int prtf_int(va_list valist)
{
	long int num1 = va_arg(valist, int), num2;
	int div = 1, i = 0;

	if (num1 < 0)
	{
		_putchar('-');
		i++;
		num1 * -1;
	}
	num2 = num1;
	while (num2 > 9)
	{
		div *= 10;
		num2 = num2 / 10;
	}
	while (div >= 1)
	{
		num2 = num1 % div;
		num /= div;
		_putchar(num + '0');
		num1 = num2;
		div /= 10;
		i++;
	}
	return (i);
}

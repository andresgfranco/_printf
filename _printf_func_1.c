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
		num1 *= -1;
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
		num1 /= div;
		_putchar(num1 + '0');
		num1 = num2;
		div /= 10;
		i++;
	}
	return (i);
}

/**
 *prtf_rev - prints string in reverse
 *@valist: va_list variable
 *Return: prints given string in reverse
 */

int prtf_rev(va_list valist)
{
	char *s = va_arg(valist, char *);
	int i, j;

	for (i = 0; s[i]; i++)
		;
	j = i;
	i--;
	for (; i >= 0; i--)
		_putchar(s[i]);

	return (j);
}

/**
 *prtf_rot - prints rot13 string
 *@valist: va_list variable
 *Return: prints ROT13 string
 */

int prtf_rot(va_list valist)
{
	char *c = va_arg(valist, char *);
	char reg[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, cnt = 0, whtspace = 0;

	if (c == NULL)
		c = "(null)";
	for (i = 0; c[i]; i++)
	{
		whtspace = 0;
		for (j = 0; reg[j] != '\0' && !whtspace; j++)
		{
			if (c[i] == reg[j])
			{
				_putchar(rot13[j]);
				cnt++;
				wthspace++;
			}
		}
		if (whtspace == 0)
		{
			_putchar(c[i]);
			cnt++;
		}
	}
	return (cnt);
}

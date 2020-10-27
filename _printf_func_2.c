#include "holberton.h"

void greater_than_127(char *s);
void less_than_32(char *s);

/**
  * prtf_Snonprintable - prints the string with
  * non printable characters
  * @valist: string coming
  * Return: number of printed characters
**/
int prtf_Snonprintable(va_list valist)
{
	int i, cnt = 0;
	char *s = va_arg(valist, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if (s[i] <= 32 && s[i] >= 0)
		{
			_putchar(92);
			_putchar('x');
			less_than_32(&s[i]);
			cnt += 4;
		}
		if (s[i] >= 127)
		{
			_putchar(92);
			_putchar('x');
			greater_than_127(&s[i]);
			cnt += 4;
		}
		else
		{
			_putchar(s[i]);
			cnt += 1;
		}
	}
	return (cnt);
}

/**
  * greater_than_127 - if the character is greater than 127
  * in ASCII table then print it as requested
  * @s: string coming
  * Return: void
**/
void greater_than_127(char *s)
{
	int i, x = 7, y = 15;
	char first[] = "0123456789ABCDEF";
	char second[] = "0123456789ABCDEF";
	char fc, sc;

	for (i = 127; i <= *s; i++)
	{
		for (fc = first[x]; first[x]; x++)
		{
			for (sc = second[y]; second[y]; y++)
			{
				fc = first[x];
				sc = second[y];
				i++;
				if (i == *s)
					break;
			}
			if (i == *s)
			{
				sc = second[y + 1];
				break;
			}
			if (y == 16)
				y = 0;
		}
		if (x == 16)
			x = 0;
		if (i == *s)
			break;
	}
	_putchar(fc);
	_putchar(sc);
}

/**
  * less_than_32 - if the character is less than 32
  * in ASCII table then print it as requested
  * @s: string coming
  * Return: void
**/
void less_than_32(char *s)
{
	int i, x = 0, y = 0;
	char first[] = "0123456789ABCDEF";
	char second[] = "0123456789ABCDEF";
	char fc, sc;

	for (i = 0; i <= *s; i++)
	{
		for (fc = first[x]; first[x]; x++)
		{
			for (sc = first[y]; first[y]; y++)
			{
				fc = first[x];
				sc = second[y];
				i++;
				if (i == *s)
					break;
			}
			if (i == *s)
			{
				sc = second[y + 1];
				break;
			}
			if (y == 16)
				y = 0;
		}
		if (x == 16)
			x = 0;
		if (i == *s)
			break;
	}
	_putchar(fc);
	_putchar(sc);
}

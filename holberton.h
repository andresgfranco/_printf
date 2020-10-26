#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* -- Structures -- */
/**
 *struct prtf - contain indicator and functions pointers
 *@frm: string with format
 *@func: pointer to function
 */

typedef struct prtf
{
	char *frm;
	int (*func)(va_list valist);
} func_prtf;

/* -- Prototypes --*/
int _putchar(char c);
int _printf(const char *format, ...);
int prtf_c(va_list valist);
int prtf_s(va_list valist);
int prtf_int(va_list valist);
int prtf_rev(va_list valist);
int prtf_rot(va_list valist);

#endif

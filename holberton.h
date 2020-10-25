#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <strarg.h>

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

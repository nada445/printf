#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct ops - struct
 * @sp: char
 * @f: pointer
 * Description: struct to perform calc
 */
typedef struct ops
{
	char *sp;
	void (*f)(va_list, int *);
} ops_t;

#endif

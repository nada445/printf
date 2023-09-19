#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list ptr, int *charcountp);
void print_str(va_list ptr, int *charcountp);
void print_percent(va_list ptr, int *charcountp);
void print_int(va_list ptr, int *charcountp);
void print_reversed(va_list ptr, int *charcountp);
void print_rot13(va_list ptr, int *charcountp);
void print_binary(va_list ptr, int *charcountp);
void print_pointer(va_list ptr, int *charcountp);
void print_hexa(int n);
void print_hexstr(va_list ptr, int *charcountp);
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

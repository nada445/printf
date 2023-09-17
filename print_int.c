#include "main.h"
/**
 * print_int - does something
 * @ptr: variable
 * @charcountp: variable
 * Return: void
 */
void print_int(va_list ptr, int *charcountp)
{
int divisor = 1;
int num = va_arg(ptr, int);
int num_copy, num_digits, i, digit;

if (ptr == NULL)
return;
if (num < 0)
{
_putchar('-');
(*charcountp) += 1;
num = -num; }
if (num == 0)
{
_putchar('0');
(*charcountp) += 1; }
else
{
num_copy = num;
num_digits = 0;

while (num_copy != 0)
{
num_copy /= 10;
num_digits++; }
for (i = 1; i < num_digits; i++)
{
divisor *= 10; }
while (divisor > 0)
{
digit = num / divisor;
_putchar('0' + digit);
(*charcountp) += 1;
num %= divisor;
divisor /= 10; }}
}

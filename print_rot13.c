#include "main.h"
/**
 * print_rot13 - prints the ROT13-encoded string
 * @ptr: va_list pointer
 * @charcountp: pointer to character count
 */

void print_rot13(va_list ptr, int *charcountp)
{
int i;
int j;
char *str = va_arg(ptr, char *);
char orarr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char charr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
if (!str)
{
str = "(null)";
}
else
{
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; orarr[j] != '\0'; j++)
{
if (str[i] == orarr[j])
{
str[i] = charr[j];
break;
}
}
}
}
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
(*charcountp) += 1;
}
}

#include <stdio.h>
#include "main.h"
int main (void)
{
    char *s = "ggg";
    int len;
    int len2;
     len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

  _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
     _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
     _printf("String:[%s]\n", s);
    printf("String:[%s]\n", s);
 len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
     _printf("Len:[% d]\n", len);
    printf("Len:[% d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    len =_printf("nknown:%");
    len2=printf("\nUnknown:%");
     printf("\nLen:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);

}

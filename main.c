#include <stdio.h>
#include "main.h"
int main (void)
{
    int len;
    int len2,i,j;
     len = 12345678;
     len2= 12345678;
     
   i= _printf("Length:[%d, %i]\n", len, len);
   j= printf("Length:[%d, %i]\n", len2, len2);
    _printf("i:[%d, %i]\n", i, i);
    printf("j:[%d, %i]\n", j, j);
    len = -12345678;
     len2= -12345678;
     
   i= _printf("Length:[%d, %i]\n", len, len);
   j= printf("Length:[%d, %i]\n", len2, len2);
    _printf("i:[%d, %i]\n", i, i);
    printf("j:[%d, %i]\n", j, j);
    len = 1234567899;
     len2= 1234567899;
     
   i= _printf("Length:[%d, %i]\n", len, len);
   j= printf("Length:[%d, %i]\n", len2, len2);
    _printf("i:[%d, %i]\n", i, i);
    printf("j:[%d, %i]\n", j, j);
    len = 0;
     len2= 0;
     
   i= _printf("Length:[%d, %i]\n", len, len);
   j= printf("Length:[%d, %i]\n", len2, len2);
    _printf("i:[%d, %i]\n", i, i);
    printf("j:[%d, %i]\n", j, j);
    i= _printf("Length:[%d, %i]\n", NULL, '\0');
   j= printf("Length:[%d, %i]\n", NULL, '\0');
    _printf("i:[%d, %i]\n", i, i);
    printf("j:[%d, %i]\n", j, j);

    return (0);
}

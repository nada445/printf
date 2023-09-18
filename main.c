#include "main.h"
#include <stdio.h>

int main (void)
{
   char *len = "%s";
    int i,j;
     
   i= _printf("Length:[%s] \' \n", len);
   j= printf("Length:[%s] \' \n", len);
    _printf("i:[%d, %i]\n", i, i);
    printf("j:[%d, %i]\n", j, j);
  _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
      _printf("large:[%d]\n", 1234567899);
    printf("large:[%d]\n", 1234567899);


    return (0);
}

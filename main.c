#include "main.h"
#include <stdio.h>
int main (void)
{
  int i,j;
     
   i= _printf("Length:[%%d, %c]\n", NULL,'\0' );
   j= printf("Length:[%%d, %c]\n", NULL, '\0');
    _printf("i:[%d, %i]\n", i, i);
    printf("j:[%d, %i]\n", j, j);
 return (0);
}

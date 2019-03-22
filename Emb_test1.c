#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
void main()
{
    int x;
    x=10;
    char buffer[10];
    itoa(x,buffer,10);
    printf("%s",buffer);
    getch();


}

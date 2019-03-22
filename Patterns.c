#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdarg.h>

/*for Pattern:
    *
   ***
  *****
*/
/*
void main()
{
    int num;
    int lineNumber=1;
    scanf("%d",&num);

    while(num>0)
    {
        for(int i=0;i<(num-1);i++)
        {
            printf(" ");
        }

        for(int i=0;i<((2*lineNumber)-1);i++)
        {
            printf("*");
        }
        printf("\n");
        lineNumber++;
        num--;
    }
}
**/

/*
For Pattern:
*
**
***
**/
void main()
{

    int num;
    int lineNumber=1;
    scanf("%d",&num);
    while(num>0)
    {
        for(int i=0;i<lineNumber;i++)
        {
            printf("*");
        }
        printf("\n");
        num--;
        lineNumber++;

    }

}

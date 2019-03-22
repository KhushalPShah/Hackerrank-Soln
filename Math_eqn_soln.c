#include <stdlib.h>
#include <stdio.h>

void main()
{
    int i=0;
    char flag=0;
    int sign[6];
    int term;
    int term_1=0;
    int term_2=0;
    char equation[100]="2+2*8-9/3";     //type the equation here!
    while(equation[i]!='\0')            //loop to display the equation with clear long tabs!
    {
      printf("%c ",equation[i]);
      i++;
    }
    for(i=0;i<6;i++)
        sign[i]=0;
    i=1;

while(equation[i]!='\0')
{
    switch(equation[i])
    {
    case '/':
        if(flag==0)
        {
                sign[2]=i;
                flag++;
                term=((('equation[i-1]')-('\0'))/(('equation[i+1]')-('\0')));
                equation[i-1]=(char)term;
                i=i+2;
                while(equation[i]!='\0')
                {
                    equation[i-2]=equation[i];
                    i++;
                }
                i=sign[2];
        }

    break;

    case '*':
        if(flag>1)
        {
            sign[3]=i;
            flag++;
            term=((('equation[i-1]')-('\0'))*(('equation[i+1]')-('\0')));
            equation[i-1]=(char)term;
            i=i+2;
            while(equation[i]!='\0')
            {
                equation[i-2]=equation[i];
                i++;
            }
            i=sign[2];
        }
    break;

    case '+':
        if(flag>2)
        {
            sign[4]=i;
            flag++;
            term=((('equation[i-1]')-('\0'))+(('equation[i+1]')-('\0')));
                equation[i-1]=(char)term;
                i=i+2;
                while(equation[i]!='\0')




}

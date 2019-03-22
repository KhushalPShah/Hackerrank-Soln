#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdarg.h>

//Pattern Count.
//Count the number of times the pattern : 1(0+)1 is repeated.
//Here 0+ indicates any number of 0s.


void main()
{
    char str[100];
    int patternCount=0;
    int i=0;
    int j=0;
    int k=0;
    int zeroSeen=0;
    printf("Enter the String :");
    scanf("%s",&str);
    //Test String Printing.
    //printf("The String is : %s",str);
    //Test Only one letter from String.
    //printf("%c",str[0]);
    int totalLength=0;
    totalLength=strlen(str);
    //Length of String.
    //printf("The length of String %d",totalLength);
    for(i=0;i<totalLength;i++)
    {
        if(str[i]=='1')
        {
            for(j=i+1;j<totalLength;j++)
            {
                if(str[j]=='0')
                {
                    zeroSeen=1;
                }
                if((str[j]!='0') && (str[j]!='1'))
                {
                    i=j+1;
                    break;
                }
                if((str[j]=='1') && (zeroSeen!=0))
                {
                    i=j-1;//to compensate for the i++ in the first FOR loop.
                    patternCount++;
                    zeroSeen=0;
                    break;
                }
            }
        }
    }

    printf("The total number of Patterns found are : %d",patternCount);
}

#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

void main()
{
    int numYear;
    int subValue=0;
    int loss=0;
    int finalLoss = 0;
    int temp = 1;
    int temp2 = 1;
    scanf("%d",&numYear);
    int rateArr[numYear];
    int lossArr[numYear];
    for(int i=0;i<numYear;i++)
    {
        scanf("%d",&rateArr[i]);
    }

    for(int i=0;i<numYear;i++)
    {
        int num1 = rateArr[i];
        for(int j=i+1;j<numYear;j++)
        {
            subValue = num1 - rateArr[j];
            if(subValue > 0)
            {
               if(temp)
               {
                    loss = subValue;
                    temp = 0;
               }
               else if(subValue < loss)
               {
                   loss = subValue;
               }
            }
        }
        if(temp2)
        {
            finalLoss = loss;
            temp2=0;
        }
        else if(finalLoss > loss)
            finalLoss = loss;
    }
    printf("%d",finalLoss);
}

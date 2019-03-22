#include <stdio.h>
#include <stdlib.h>
void main()
{
    int size=0;
    int sum1=0;
    int sum2=0;
    int i=0;
    int j=0;
    int diff=0;
    printf("Enter the size of the Square array");
    scanf("%d",&size);
    int sqr[size][size];
    for(i=0;i<size;i++)
    {
            printf("Enter the elements of row %d",(i+1));
            for(j=0;j<size;j++)
            {
                scanf("%d",&sqr[i][j]);

            }
    }
    for(i=0;i<size;i++)
    {
        sum1=sum1+sqr[i][i];
    }
    j=(size-1);
    for(i=0;i<size;i++)
    {
        sum2=sum2+sqr[i][j];
        j--;
    }
    if(sum1>sum2)
        diff=sum1-sum2;
    else
        diff=sum2-sum1;
    printf("The difference is %d",diff);

}


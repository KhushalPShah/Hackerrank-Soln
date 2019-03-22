#include<stdio.h>
#include<stdlib.h>

//Birthday Chocolate
//The bar has a certain number of Pieces and each piece has a number written on it.
// A person shares the Bar only if :
// The sum of a certain consecutive numbers is a certain number.
//Find the number of ways in which the condition is satisfied for a given Bar.



void main()
{
    int sumcount=0;
    int sumValue=0;
    int barCount=0;
    int finalCount=0;
    int ways=0;
    int temp=0;
    int j=0;
    printf("Enter the Number of Bars in the Chocolate :");
    scanf("%d",&barCount);
    int bar[barCount];
    printf("Enter the Numbers written on the bar :");
    for(int i=0;i<barCount;i++)
    {
        scanf("%d",&bar[i]);
    }

    printf("Enter the sum number :");
    scanf("%d",&sumValue);
    printf("Enter the count of Numbers to be considered :");
    scanf("%d",&sumcount);

    for(int i=0;i<barCount;i++)
    {
        temp=sumcount;
        j=i;
        while(temp)
        {
            finalCount=finalCount+bar[j];
            temp--;
            j++;
        }
        if(finalCount==sumValue)
            ways++;

        finalCount=0;
    }
    printf("The number of ways are : %d",ways);
}

#include <stdio.h>
#include <stdlib.h>

//Accurate Sorting.
//The array elements can exchange their positions with their adjacent position elements if:
// the difference between the values is 1.
//If the sorted array is in the Ascending order, print YES, else No.

int main()
{
    int sortArray[10];
    int count=0;
    int decider=0;
    printf("Enter the number of elements in the array");
    scanf("%d",&count);

    for(int i=0;i<count;i++)
    {
        scanf("%d",&sortArray[i]);
    }
    for(int i=0;i<(count-1);i++)
    {
        if(sortArray[i]-sortArray[i+1]==1 || sortArray[i]-sortArray[i+1]==-1)
        {
            if(sortArray[i]-sortArray[i+1]==1)
            {
                int temp;
                temp=sortArray[i+1];
                sortArray[i+1]=sortArray[i];
                sortArray[i]=temp;
            }

        }
    }
    for(int i=0;i<(count-1);i++)
    {
        if(sortArray[i]>sortArray[i+1])
        {
            printf("No");
            decider=1;
        }
    }
    if(decider==0)
    {
        printf("Yes");
    }
}


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdarg.h>

//Twin Array.
//2 Arrays will be given and we need to find the sum of the minimum number of the 2 arrays with a condition that the Indices
//of the Minimum number should be different.

void main()
{
    int sizeArray=0;
    int i=0;
    //Take the Input.
    printf("Enter the size of Array: ");
    scanf("%d",&sizeArray);
    int arrayA[sizeArray];
    int arrayB[sizeArray];
    int indexArrayA[sizeArray];
    int indexArrayB[sizeArray];
    int minIndexA[sizeArray];
    int minIndexB[sizeArray];
    int sum=0;
    printf("Enter the elements of Array A :");
    for(i=0;i<sizeArray;i++)
    {
        scanf("%d",&arrayA[i]);
        indexArrayA[i]=arrayA[i];
    }

    printf("Enter the elements of Array B :");
    for(i=0;i<sizeArray;i++)
    {
        scanf("%d",&arrayB[i]);
        indexArrayB[i]=arrayB[i];
    }

    //Arrange both the Arrays in Ascending Order
    for(i=0;i<sizeArray;i++)
    {
        for(int j=i+1;j<sizeArray;j++)
        {
            if(arrayA[i]>arrayA[j])
            {
                int temp=arrayA[i];
                arrayA[i]=arrayA[j];
                arrayA[j]=temp;
            }
        }
    }
    for(i=0;i<sizeArray;i++)
    {
        for(int j=i+1;j<sizeArray;j++)
        {
            if(arrayB[i]>arrayB[j])
            {
                int temp=arrayB[i];
                arrayB[i]=arrayB[j];
                arrayB[j]=temp;
            }
        }
    }
    for(i=0;i<sizeArray;i++)
    {
        for(int j=0;j<sizeArray;j++)
        {
            if(arrayA[i]==indexArrayA[j])
                minIndexA[i]=j;
        }
    }
    for(i=0;i<sizeArray;i++)
    {
        for(int j=0;j<sizeArray;j++)
        {
            if(arrayB[i]==indexArrayB[j])
                minIndexB[i]=j;
        }
    }
    for(i=0;i<sizeArray;i++)
    {
        if(minIndexA[i]!=minIndexB[i])
        {
            sum=arrayA[i]+arrayB[i];
            break;
        }
    }
    printf("The sum is : %d ",sum);
}

#include<stdio.h>
#include<stdlib.h>

//Between 2 Sets.
// The Number is said to be between 2 sets of Numbers if:
// 1- All the numbers in setA are factors of the Number.
// 2- The number is a Factor of All the numbers in setB.
//Find How many such numbers are present between SetA and SetB.



void main()
{
    int countA=0;
    int countB=0;
    int finalCount=0;
    int maxA=0;
    int maxB=0;
    int minA=0;
    int minB=0;
    int start=0;
    int end=0;
    int setAStart=0;
    int setBStart=0;
    int deciderA=0;
    int deciderB=0;
    printf("Enter the Number of elements of set A :");
    scanf("%d",&countA);
    printf("Enter the Number of elements of set B :");
    scanf("%d",&countB);
    int setA[countA];
    int setB[countB];
    printf("Enter the elements of Set A :");
    for(int i=0;i<countA;i++)
    {
        scanf("%d",&setA[i]);
        if(maxA<setA[i])
            maxA=setA[i];

        if(minA==0 || (minA>setA[i]))
            minA=setA[i];
    }
    printf("The Minimum number of A is : %d \n",minA);
    printf("The Maximum number of A is : %d \n",maxA);
    printf("Enter the elements of Set B :");
    for(int i=0;i<countB;i++)
    {
        scanf("%d",&setB[i]);
        if(maxB<setB[i])
            maxB=setB[i];

        if((minB==0) || (minB>setB[i] ))
            minB=setB[i];
    }
    printf("The minimum number of B is : %d \n",minB);
    printf("The maximum number of B is : %d \n",maxB);
    if(maxA<maxB)
    {
        start=maxA;
        end=minB;
    }
    else
    {
        start=maxB;
        end=minA;
    }
    printf("The start point is : %d \n",start);
    printf("The end point is : %d \n",end);
    for(int i=start;i<=end;i++)
    {
        for(setAStart=0;setAStart<countA;setAStart++)
        {
            if((i%setA[setAStart])==0)
                deciderA++;
        }
        for(setBStart=0;setBStart<countB;setBStart++)
        {
            if((setB[setBStart]%i)==0)
                deciderB++;
        }
        if((deciderA==countA) && (deciderB==countB))
          {
            finalCount++;
        }
        deciderA=0;
        deciderB=0;
    }

    printf("The final Count is : %d",finalCount);
}

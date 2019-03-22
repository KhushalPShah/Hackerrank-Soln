#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdarg.h>

//Lonely Integer:
//Each number in the array appears for 2 times except one integer. Find that integer.
void main()
{
    int count=0;
    int i=0;
    int j=0;
    int temp=0;
    printf("Enter the number of elements of the Array :");
    scanf("%d",&count);
    int arr[count];
    printf("Enter the elements of the Array :");
    for(int i=0;i<count;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<count;i++)
    {
        temp=count;
        for(j=i+1;j<count;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<count;k++)
                    arr[k]=arr[k+1];
                count--;
            }
        }
        if(temp==count)
            printf(" The number is : %d",arr[i]);
    }
}

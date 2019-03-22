#include <stdio.h>
#include <stdlib.h>

void main()
{
    int size;
    printf("enter the size of list: \n");
    scanf("%d",&size);
    int i;
    int list1[100];
    int temp1;
    int flag=0;
    for(i=0;i<100;i++)
    {
        list1[i]=0;
    }
    printf("enter content of list 1 :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&temp1);
        list1[temp1]++;
    }

    printf("enter the contents of list 2:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&temp1);
        list1[temp1]--;
        if(list1[temp1]<0)
        {
            printf("Not a permutation.");
            flag=1;
            break;
        }
    }
    if(flag!=1)
    {
        printf("It is a permutation");
    }
}








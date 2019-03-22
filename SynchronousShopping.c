#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdarg.h>
void main()
{
    int node1=0;
    int node2=0;
    int arr[10];
    printf("Enter the details:");
    for(int i=0;i<10;i++)
    {
        scanf("%d %d",&node1,&node2);
        arr[i]=node1;
        arr[i+1]=node2;
        i++;
    }
    int presentNode=1;
    int finalNode=5;
    int i=0;
    while(presentNode!=finalNode)
    {
        if(arr[i]==presentNode)
        {
            printf("%d",presentNode);
            printf("->");
            printf("%d \t",arr[i+1]);
            presentNode=arr[i+1];
        }
        i=i+2;

    }
}

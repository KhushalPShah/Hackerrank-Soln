ram#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdarg.h>

void main()
{

    int ticketNumber=0;
    int firstHalf=0;
    int secondHalf=0;
    int sum1=0;
    int sum2=0;
    int temp1=0;
    int n=10;
    printf("Enter the ticket Number");
    scanf("%d",&ticketNumber);
    firstHalf=(ticketNumber/1000);
    secondHalf=(ticketNumber%1000);
    printf("%d %d",firstHalf,secondHalf);
    int cpyFirstHalf=0;
    int cpySecondHalf=0;
    cpyFirstHalf=firstHalf;
    cpySecondHalf=secondHalf;
    for(int i=0;i<3;i++)
    {
        temp1=(cpyFirstHalf%n);
        sum1=sum1+temp1;
        cpyFirstHalf=cpyFirstHalf/10;
    }
    printf("Sum1: %d",sum1);
    for(int i=0;i<3;i++)
    {
        temp1=(cpySecondHalf%n);
        sum2=sum2+temp1;
        cpySecondHalf=cpySecondHalf/10;
    }
    printf("Sum2: %d",sum2);
    secondHalf++;
    sum2=findSum(secondHalf);
    while(sum2!=sum1)
    {
        secondHalf++;
        sum2=findSum(secondHalf);
    }
    printf("Sum2: %d",secondHalf);
    int finalTicket=0;
    finalTicket=((firstHalf*1000)+secondHalf);
    printf("The next ticket is: %d",finalTicket);


}
int findSum(int testNumber)
{
    int temp=0;
    int sum=0;
    int divider=10;
    for(int i=0;i<3;i++)
    {
        temp=(testNumber%divider);
        sum=sum+temp;
        testNumber=testNumber/10;
    }
    return sum;

}



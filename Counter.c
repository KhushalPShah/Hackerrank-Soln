#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdarg.h>

//Counter Game:
//2 player (Richard and Louise) play a game. The counter is set to a value.
//Each player makes a move.
//If the counter value is a power of 2, reduce counter value by half its value.
//else reduce the count by the largest power of 2 less than Original count.
//find the person who wins when the other cannot make a move.

void main()
{
    int count=0;
    char power2=0;
    int largestPower2=0;
    int chance=0;
    printf("Enter the Counter Value :");
    scanf("%d",&count);
    largestPower2=count;
    while((largestPower2 & (largestPower2-1)) != 0)
        largestPower2--;
    while(count != 1)
    {
        if((count & (count-1)) == 0)
            power2=1;

        if(power2==0)
            count=count-(largestPower2);
        else
            count=count-(count/2);

        power2=0;
        chance++;
    }
    printf("Chances : %d",chance);

    if(chance%2==0)
        printf("Richard Wins");
    else
        printf("Louise Wins");


}

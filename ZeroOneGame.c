#include <stdio.h>
#include <stdlib.h>

//Zero One Game:
//The player can remove a number if:
// 1-The number is surrounded on both sides by 0
// 2- The number is not a beginning and an end number.
// Alice begins and the player who is not able to make a move loses.

int main()
{
    int count=0;
    int temp=0;
    int turn=0;
    printf("Enter the number of elements in the Sequence :");
    scanf("%d",&count);
    int sequence[count];
    for(int i=0;i<count;i++)
        scanf("%d",&sequence[i]);
    for(int i=1;i<(count-1);i++)
    {
        if(sequence[i-1]==0 && sequence[i+1]==0)
        {
            count--;
            temp=i;
            turn++;
            while(i<count)
            {
                sequence[i]=sequence[i+1];
                i++;
            }
            i=temp;
        }
    }
    if(turn%2==0)
        printf("Bob Wins");
    else
        printf("Alic Wins");




}


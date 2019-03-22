#include <stdio.h>
#include <stdlib.h>
//Kangaroos.
//Given the Start position of the Kangaroos and their Speeds of Jumping, find whether they will meet each other at any point.


void main()
{
    int pos1=0;
    int pos2=0;
    int speed1=0;
    int speed2=0;
    printf("Enter the position of Kangaroo 1 :");
    scanf("%d",&pos1);
    printf("Enter the Position of Kangaroo 2 :");
    scanf("%d",&pos2);
    printf("Enter the Speed of Kangaroo 1 :");
    scanf("%d",&speed1);
    printf("Enter the Speed of kangaroo 2 :");
    scanf("%d",&speed2);

    if(speed2 > speed1)
        printf("NO. The Kangaroos will never meet.");
    else
    {
        if((pos1+speed1)<(pos2+speed2))
        {
            if(((pos2+speed2)%(pos1+speed2))==0)
                printf("YES. The Kangaroos will meet.");
        }
        else if (((pos1+speed1)%(pos2+speed2))==0)
            printf("YES. The Kangaroos will meet.");
        else
            printf("NO. The Kangaroos will never meet");

    }


}

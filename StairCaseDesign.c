#include <stdio.h>
#include <stdlib.h>
//Print the design of Right Angled Triangle
//     #
//    ##
//   ###
//  ####


void main()
{
    int size=0;
    int space=0;
    printf("Enter the size of the Design: ");
    scanf("%d",&size);
    space=(size-1);
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(space<=j)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
        space--;
    }

}

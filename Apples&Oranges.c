#include <stdio.h>
#include <stdlib.h>
//Apple and Orange
//Given the position of the Start and end points of the House and the positions of Apple and Orange Tree.
//Also given the Number of apples and Oranges and their position of Fall on the ground.
// Determine how many Apple and Oranges will fall into the House.


void main()
{
    int start=0;
    int end=0;
    int posAppleTree=0;
    int posOrangeTree=0;
    int countApple=0;
    int countOrange=0;
    int distanceAppleTree=0;
    int distanceOrangetree=0;
    int AppleHome=0;
    int OrangeHome=0;

    printf("Enter the Start point of the house :");
    scanf("%d",&start);
    printf("Enter the End point of the House :");
    scanf("%d",&end);
    printf("Position of the Apple Tree :");
    scanf("%d",&posAppleTree);
    printf("Position of the Orange Tree :");
    scanf("%d",&posOrangeTree);
    printf("Number of Apples on the tree :");
    scanf("%d",&countApple);
    printf("Number of Oranges on the Tree :");
    scanf("%d",&countOrange);

    int positionApple[countApple];
    int positionOrange[countOrange];

    distanceAppleTree=posAppleTree-start;
    distanceOrangetree=posOrangeTree-end;

    for(int i=0;i<countApple;i++)
    {
        printf("Enter the Position of fall of Apple %d :",(i+1));
        scanf("%d",&positionApple[i]);
        if(positionApple[i]<=(distanceAppleTree))
            AppleHome++;
    }
    printf("The apples which falls into the House are : %d \n",AppleHome);
    for (int i=0;i<countOrange;i++)
    {
        printf("Enter the position of fall of Orange %d :",(i+1));
        scanf("%d",&positionOrange[i]);
        if(positionOrange[i]>=distanceOrangetree)
            OrangeHome++;
    }
    printf("The Oranges which fall into the House are : %d",OrangeHome);
}

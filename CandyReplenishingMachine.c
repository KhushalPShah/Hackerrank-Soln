#include <stdio.h>
#include <stdlib.h>

//Candy Replenishing Machine
//The robot fills the jar if the candies in the jar becomes less than 5.
//The robot does not fill the jar is its the last time instant.
//Find the number of candies that the robot fills in the jar.

int main()
{
 int totalNo=0;
 int totalTime=0;
 int candiesAdded=0;
 int finalCandies=0;
 printf("Enter the total Number of Candies: ");
 scanf("%d",&totalNo);
 printf("Enter the Duration of the party: ");
 scanf("%d",&totalTime);
 int removed[totalTime];
 for(int i=0;i<totalTime;i++)
 {
     printf("Enter the candies removed for Time %d :",(i+1));
     scanf("%d",&removed[i]);
 }
 for(int i=0;i<(totalTime-1);i++)
 {
     if(removed[i]>3)
     {
         candiesAdded=(removed[i]);
         finalCandies=candiesAdded+finalCandies;
     }
     else
     {
         removed[i+1]=removed[i]+removed[i+1];
     }


 }
 printf("The total number of Candies added by the robot is:%d",finalCandies);

}


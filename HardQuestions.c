#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdarg.h>

void main()
{

    int totalQuestion=0;
    int score=0;
    printf("Enter the total number of Questions : ");
    scanf("%d",&totalQuestion);
    char ansVincent[totalQuestion];
    char ansCatherine[totalQuestion];
    printf("Enter the Answer pattern for Vincent :");
    scanf("%s",&ansVincent);
    printf("Enter the Answer pattern for Catherine :");
    scanf("%s",&ansCatherine);
    for(int i=0;i<totalQuestion;i++)
    {
        if(ansVincent[i]!=ansCatherine[i])
        {
            score++;
        }
    }
    printf("Score is : %d",score);
}

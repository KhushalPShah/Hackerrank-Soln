#include <stdio.h>
#include <stdlib.h>
//Grading Students based on Round Off
//The professor rounds off the marks of the student if:
// 1- The marks are less than 3 short of next multiple of 5.(rounds of to next multiple of 5).
// 2- The professor does not round off marks of people who are going to fail even after round off.

void main()
{
    int count;
    int temp;
    printf("Enter the number of Students : ");
    scanf("%d",&count);
    int grade[count];
    for(int i=0;i<count;i++)
    {
        scanf("%d",&grade[i]);
        if(grade[i]<38)
            grade[i]=grade[i];
        else
        {
            if((grade[i]%5)>=3)
             {
                 temp=grade[i]%5;
                 grade[i]=grade[i]+(temp-1);
             }
        }
        printf("Rounded to : %d",grade[i]);
    }


}

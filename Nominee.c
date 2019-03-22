#include <stdio.h>
#include <stdlib.h>

//Nominating the Group leader.
//The member of class can vote (vote[i]) one vote each.
//The leader is the one who has the same number of votes as that of the required Votes(reqVotes).
//Also the teacher considers votes of only those students who have their ID (i) between Low and High variables.
//In case if there are two or more Nominees, then the Nominee with the  lower ID is selected.


void main()
{
    int stdCount=0;
    int index=0;
    int low=0;
    int high=0;
    int reqVotes=0;
    int decider=0;
    int nominee=0;
    printf("Enter the number of students in the Class :");
    scanf("%d",&stdCount);
    int vote[stdCount];
    int voteCount[stdCount];
    for(int i=0;i<stdCount;i++)
    {
         scanf("%d",&vote[i]);
         voteCount[i]=0;

    }
    printf("Enter the Lower limit for Range of ID :");
    scanf("%d",&low);
    printf("Enter the higher limit for the Range of ID :");
    scanf("%d",&high);
    printf("Enter the desired Number of Votes required :");
    scanf("%d",&reqVotes);
    for(int i=low;i<=high;i++)
    {
        index=vote[i];
        voteCount[index]++;
    }
    for(int i=low;i<=high;i++)
    {
        if(voteCount[vote[i]]==reqVotes)
        {
            if(nominee==0)
                nominee=vote[i];
            else if(nominee > vote[i])
                nominee=vote[i];
            decider=1;
        }
    }


    if(decider==0)
        printf("-1");

    else
        printf("The Nominee is %d",nominee);

}


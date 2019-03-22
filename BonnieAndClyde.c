#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdarg.h>

//Bonnie and Clyde
//The map is given with Nodes and Edges joining 2 nodes.
//Given the nodes of 2 Person and node of the Meeting place(Sushi Restaurant),
//find whether they will meet at any Node before the Restaurant.
//If so, print NO, else YES.





void main()
{
    int edgeCount=0;
    int nodeCount=0;
    int i=0;
    int j=0;
    int nodeBonnie=0;
    int nodeClyde=0;
    int nodeSushi=0;
    int indexPathBonnie=0;
    int indexPathClyde=0;
    int currentBonnieNode=0;
    int currentClydeNode=0;
    int decider=0;

    printf("Enter the Number of Nodes : ");
    scanf("%d",&nodeCount);
    printf("Enter the Number of Edges : ");
    scanf("%d",&edgeCount);
    int edgeArray[edgeCount*2];         //Each edge will be a segment joining 2 nodes. Thus,2 x edgeCount.
    int bonniePathArray[nodeCount];     //Maximum can be through all the nodes so.
    int clydePathArray[nodeCount];
    for(i=0;i<nodeCount;i++)
    {
        bonniePathArray[i]=0;
        clydePathArray[i]=0;
    }

    for(i=0;i<edgeCount;i++)
    {
        printf("Enter the Vertex Points of Edge %d :",i+1);
        scanf("%d %d",&edgeArray[j],&edgeArray[j+1]);
        j+=2;
    }
    printf("Enter the Bonnie's Node : ");
    scanf("%d",&nodeBonnie);
    bonniePathArray[indexPathBonnie]=nodeBonnie;
    currentBonnieNode=nodeBonnie;
    printf("Enter the Clyde's Node : ");
    scanf("%d",&nodeClyde);
    clydePathArray[indexPathClyde]=nodeClyde;
    currentClydeNode=nodeClyde;
    printf("Enter the Sushi Restraunt's Node : ");
    scanf("%d",&nodeSushi);
    indexPathBonnie=1;

    for(i=0;i<(edgeCount*2);i++)
    {
        if(currentBonnieNode==edgeArray[i])
        {
            if((i%2)==0)      //if its Even, its the Start point, thus the Destination point should be added to the path.
            {
                bonniePathArray[indexPathBonnie]=edgeArray[i+1];
                currentBonnieNode=edgeArray[i+1];
                if(edgeArray[i+1]==nodeSushi)
                    break;
            }
            else
            {
                bonniePathArray[indexPathBonnie]=edgeArray[i-1];
                currentBonnieNode=edgeArray[i-1];
                if(edgeArray[i-1]==nodeSushi)
                    break;
            }
            indexPathBonnie++;
        }
    }
    indexPathClyde=1;
    for(i=0;i<(edgeCount*2);i++)
    {
        if(currentClydeNode==edgeArray[i])
        {
            if((i%2)==0)      //if its Even, its the Start point, thus the Destination point should be added to the path.
            {
                clydePathArray[indexPathClyde]=edgeArray[i+1];
                currentClydeNode=edgeArray[i+1];
                if(edgeArray[i+1]==nodeSushi)
                    break;
            }
            else
            {
                clydePathArray[indexPathClyde]=edgeArray[i-1];
                currentClydeNode=edgeArray[i-1];
                if(edgeArray[i-1]==nodeSushi)
                    break;
            }
            indexPathClyde++;
        }
    }
    if(indexPathBonnie>indexPathClyde)
    {
        for(i=0;i<indexPathClyde;i++)
        {
           for(j=0;j<indexPathBonnie;j++)
           {
               if(clydePathArray[i]==bonniePathArray[j])
               {
                   printf("YES");
                   decider=1;
                   break;
               }
           }
           if(decider==1)
            break;
        }
    }
    else
    {
        for(i=0;i<indexPathBonnie;i++)
        {
            for(j=0;j<indexPathClyde;j++)
            {
                if(bonniePathArray[i]==clydePathArray[j])
                {
                    printf("NO");
                    decider=1;
                    break;
                }
            }
            if(decider==1)
                break;
        }
    }
    if(decider==0)
        printf("YES");

}

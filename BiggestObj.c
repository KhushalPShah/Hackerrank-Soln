#include <stdlib.h>
#include <stdio.h>

void main()
{
    int rows;
    int columns;
    int i,j;
    int size=1;
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    printf("Enter the number of columns:\n");
    scanf("%d",&columns);
    int array[rows+1][columns+1];
    for(i=0;i<=rows;i++)            //loop to initialize the array
    {
        for(j=0;j<=columns;j++)
        {
            array[i][j]=0;
        }
    }
    printf("Enter the contents of the array:\n");       //Loop to take input
    for(i=0;i<rows;i++)
    {
        printf("Enter the contents of Row %d \n",(i+1));
        for(j=0;j<columns;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("The entered list is:\n");       //Loop to display the array
    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=columns;j++)
        {
            printf("%d \t",array[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<rows;i++)         //Main Loop to find the biggest Object.
    {
        for(j=0;j<columns;j++)
        {
            if(array[i][j])
            {
                while(array[i+size][j] && array[i+size][j+size] && array[i][j+size])
                {
                    size++;
                }
            }
        }
    }


    printf("The biggest Object has the size of %d",size);
}

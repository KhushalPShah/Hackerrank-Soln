#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    int j;
    int count=0;
    int rows=0;
    int columns=0;
    int t_rows=0;
    int t_columns=0;
    int n=1;
    printf("Enter the number of Rows :\n");
    scanf("%d",&t_rows);
    printf("enter the number of columns:\n");
    scanf("%d",&t_columns);
    rows=t_rows+1;      //extra row at the top of the array.
    columns=t_columns+2;//extra 2 columns on each side of the main array.
    int image[rows][columns];

    for(i=0;i<rows;i++)     //clean the array.
    {
        for(j=0;j<columns;j++)
        {
            image[i][j]=0;
        }
    }

    for(i=1;i<=t_rows;i++)     //loop to take input of image array.
    {
        for(j=1;j<=t_columns;j++)
        {
            printf("enter the number at %d row and %d column:\n",(i),(j));
            scanf("%d",&image[i][j]);

        }
    }
    printf("the List is:\n");
    for(i=0;i<rows;i++)     //loop to display the image array.
    {
        for(j=0;j<columns;j++)
        {
            printf("%d \t",image[i][j]);
        }
        printf("\n");

    }

    for(i=1;i<=t_rows;i++)
    {
        for(j=1;j<=t_columns;j++)
        {
            if(image[i][j])
            {
                image[i][j]=n*10;
                image[i][j]=check(rows,columns,image,i,j,n);
                count=image[i][j];
                if(image[i][j]==(n*10))
                n++;
            }
        }
    }

    printf("Count of object is: %d",(count/10));
}


int check(int temp_rows,int temp_columns,int temp[temp_rows][temp_columns],int r,int c,int temp_count)
{
char found=0;
//loop to print the array that the function received.
/*printf("FUNCTION \n");
for(int i=0;i<temp_rows;i++)
{
    for(int j=0;j<temp_columns;j++)
    {
        printf("%d \t",temp[i][j]);
    }
    printf("\n");

}*/

if(((temp[r-1][c+1])%10==0) && ((temp[r-1][c+1])!=0))       //check the value at upper row,next column neighbor.
  {
  if(temp[r-1][c+1]<temp[r][c])                     //if the label of the neighbor is less,copy its label.
   {
       temp[r][c]=temp[r-1][c+1];
        found=1;                                //neighbor encountered flag high to avoid going into the last else condition.
   }
  }
if(((temp[r-1][c])%10==0) && ((temp[r-1][c])!=0))       //check the value at upper row,same column neighbor.
  {
    if(temp[r-1][c]<temp[r][c])                 //if the label of the neighbor is less,copy its label.
   {
       temp[r][c]=temp[r-1][c];
        found=1;                    //neighbor encountered flag high to avoid going into the last else condition.
   }
  }
if(((temp[r-1][c-1])%10==0) && ((temp[r-1][c-1])!=0))       //check the value at upper row,previous column neighbor.
  {
    if(temp[r-1][c-1]<temp[r][c])               ////if the label of the neighbor is less,copy its label.
   {
       temp[r][c]=temp[r-1][c-1];
        found=1;                        //neighbor encountered flag high to avoid going into the last else condition.
   }
  }
 if(((temp[r][c-1])%10==0)  && ((temp[r][c-1])!=0))     //check the value at same row,previous column neighbor.
  {
    if(temp[r][c-1]<temp[r][c])                 ////if the label of the neighbor is less,copy its label.
   {
       temp[r][c]=temp[r][c-1];
        found=1;            //neighbor encountered flag high to avoid going into the last else condition.
   }
  }

if(found==0)           //if no neighbor encountered.
{
  temp[r][c]=temp_count*10;     //return the original label.

}
return temp[r][c];
}



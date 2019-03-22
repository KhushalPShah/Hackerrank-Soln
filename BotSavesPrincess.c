#include <stdio.h>
#include <string.h>
#include <math.h>

void displayPathtoPrincess(int n, char grid[101][101])
{
    char i_princess = n+1;
    char j_princess = n+1;
    char i_bot = n+1;
    char j_bot = n+1;
    char diff_i = 0;
    char diff_j = 0;
    //logic here
    //Traverse the Grid and find the Princess(p) and the Bot(m).
    for(int i = 0; i < n; i++ )
    {
        for(int j = 0; j < n; j++)
        {
            if(grid[i][j] != (int)('-'))
            {
                if(grid[i][j] == (int)('m'))
                {
                    i_bot = i;
                    j_bot = j;
                }
                else
                {
                    i_princess = i;
                    j_princess = j;
                }
            }
        }
    }
    if(i_bot > i_princess)
    {
        while(i_bot > i_princess)
        {
            printf("UP \n");
            i_princess++;
        }
    }
    else if(i_princess > i_bot)
    {
        while(i_princess > i_bot)
        {
            printf("DOWN \n");
            i_bot++;
        }
    }
    if(j_bot > j_princess)
    {
        while(j_bot > j_princess)
        {
            printf("LEFT \n");
            j_princess++;
        }
    }
    else if(j_princess > j_bot)
    {
        while(j_princess > j_bot)
        {
            printf("RIGHT \n");
            j_bot++;
        }
    }
}

int main(void) {

    int m;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}

#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

//Incomplete.
// Use the Depth First Search (DFS) algorithm.
// It is one of the most widely used algorithms for solving such graph problems.

//Incomplete

//TODO: For each Sub-graph, find what is the distance between the 2 Points.
//And Compare that with the Cost of the Library.

int map[10][10];
int visited[10];


void dfs(int i)
{
    visited[i] = 1;
    printf("%d",i);

    for(int j=1;j<10;j++)
    {
        if(map[i][j]==1 && (!visited[j]))
        {
            dfs(j);
        }
    }


}


int main(void)
{
    int query_count;


    int number_of_cities;
    int number_of_roads;
    int cost_library;
    int cost_road;

    int node_1;
    int node_2;

    int temp = 0;

    int number_of_sub_graphs = 1;
    scanf("%d",&number_of_cities);
    scanf("%d",&number_of_roads);

    //Initializing the Map Array and Visited Array to 0.
    for(int i=1;i<10;i++)
    {
        visited[i] = 0;
        for(int j=1;j<10; j++)
        {
            map[i][j] = 0;
        }

    }

    //Taking the Input for the Roads.
    for(int i=0; i<number_of_roads; i++)
    {
        scanf("%d %d",&node_1,&node_2);
        map[node_1][node_2] = 1;
    }

    dfs(1);

    for(int i=1; i<=number_of_cities; i++)
    {
        if(visited[i]!= 1)
        {
            printf("\n NOT COMPLETELY CONNECTED \n");
            dfs(i);
            number_of_sub_graphs++;
            i = 1;
            temp = 1;
        }
    }
    if(!temp)
        printf("\n COMPLETELY CONNECTED");
    printf("Number of Sub Graphs: %d",number_of_sub_graphs);

}



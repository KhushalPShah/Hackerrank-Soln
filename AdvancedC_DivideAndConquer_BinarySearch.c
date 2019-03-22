#include <stdio.h>
#include <string.h>
#include <math.h>

//Incomplete.

int search(int arr[], int start, int centre ,int end,int search_element)
{
    int n1 = centre - start + 1;
    int n2 = end - centre;
    int i,j;
    while((i<n1) && (j<n2))
    {

    }

}
void divide(int arr[], int start, int end,int search_element)
{
    if(start < end)
    {
        int centre = ((start+end)/2);
        divide(arr,start,centre);
        divide(arr,centre+1,end);
        int status = search(arr,start,centre,end,search_element);
    }
}

int main()
{
    int arr[] = {2,5,8,9,3,5};
    int size_arr = (sizeof(arr)/sizeof(arr[0]));


    divide(arr,0,(size_arr-1));

    //Printing the Array.
    while(size_arr)
    {
        printf("%d \n",arr[6-size_arr]);
        size_arr--;
    }

   return 0;
}

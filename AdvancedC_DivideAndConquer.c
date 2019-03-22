#include <stdio.h>
#include <string.h>
#include <math.h>

void mergeResults(int arr[],int start,int centre,int end)
{
    int i,j,k;
    int n1 = centre-start+1;  //Number of Elements from Start to Centre.
    int n2 = end-centre;        //Number of Elements from Centre to End.

    int L[n1];      //Create New Arrays for elements from Start to Centre.
    int R[n2];     //Create New Arrays for elements from Centre to End.

    for(i=0; i<n1; i++)
    {
        L[i] = arr[start+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j] = arr[centre+j+1];
    }

    //Merge the Arrays back into the normal Array.
    i = 0;
    j = 0;
    k = start;

    while((i<n1) && (j<n2))
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int start,int end)
{
    if(start < end)
    {
        int centre = ((start+end)/2);
        printf("Center : %d",centre);
        mergeSort(arr,start,centre);
        mergeSort(arr,centre+1,end);
        mergeResults(arr,start,centre,end);
    }
}
int main()
{
    //Divide and Conquer Algorithm.
    printf("Start Learning Advanced C ! \n");

    int arr[] = {1,5,8,7,9};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of Array is : %d",arr_size);

    mergeSort(arr,0,(arr_size-1));

    while(arr_size)
    {
        printf("\n %d",arr[5-arr_size]);
        arr_size--;
    }

    return 0;


}

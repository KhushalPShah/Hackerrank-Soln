#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

//Execution correct for Test Cases with Limited Inputs.
//For a large number of Inputs, it either results in a TimeOut or a Wrong Answer.

int* arr_ascending(int *ptr,int len)
{
    int temp=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if((ptr[i]) > (ptr[j]))
            {
               temp = ptr[i];
               ptr[i] = ptr[j];
               ptr[j] = temp;
            }
        }
    }
    return ptr;
}

int main()
{
    int house_count,range;
    int *arr_ptr;
    int transmitter_count=0;
    int index1=0;
    int temp=0;
    int last_transmitter=0;
    char dual_enable = 0;

    scanf("%d %d",&house_count,&range);
    int house_array[house_count];
    for(int i=0;i<house_count;i++)
    {
        scanf("%d",&house_array[i]);
    }
    arr_ptr = arr_ascending(house_array,house_count);
    house_array[0] = *arr_ptr;
    while(index1 < house_count)
    {
        if(dual_enable == 0)
        {
            temp = index1;
            last_transmitter = house_array[index1];
            while(house_array[index1] - last_transmitter <= range)
            {
                index1++;
            }
            index1--;
            if(temp!=index1)
            {
                dual_enable = 1;
            }
            else
            {
                index1++;
            }
            transmitter_count++;
        }
        else
        {
            if(house_array[index1]-last_transmitter <= range)
            {
                last_transmitter = house_array[index1];
                while(house_array[index1]-last_transmitter < range)
                {
                    index1++;
                }
                index1++;
                dual_enable = 0;
            }
            else
            {
                transmitter_count++;
                dual_enable = 0;
            }
        }
    }


    printf("%d",transmitter_count);

    return 0;
}

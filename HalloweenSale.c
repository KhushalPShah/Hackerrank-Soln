#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

int main()
{
    int initPrice,discount,minimumPrice,balance=0;
    int itemsPurchased=0;
    char firstDone=1;
    char secondDone=0;
    scanf("%d %d %d %d",&initPrice,&discount,&minimumPrice,&balance);

    if(balance >= initPrice)
    {
        while((balance >= minimumPrice))
        {
            if((balance > initPrice) && (firstDone))
            {
                itemsPurchased++;
                balance = balance - initPrice;
                firstDone=0;
            }
            else if(initPrice - discount > minimumPrice)
            {
                if((balance >= (initPrice-discount)) && ((initPrice-discount) >= minimumPrice))
                {
                    itemsPurchased++;
                    balance = balance - (initPrice-discount);
                    initPrice = (initPrice - discount);
                    secondDone = 1;
                }
                else
                    break;
            }

            else if((balance >= minimumPrice))
            {
                itemsPurchased++;
                balance = balance - minimumPrice;
            }
            else
                break;
        }
    }

    printf("%d",itemsPurchased);
    return 0;
}

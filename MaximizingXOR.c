#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

void main()
{
    int num1,num2;
    int ans=0;
    scanf("%d %d",&num1,&num2);


    for(int i=num1;i<=num2;i++)
    {
        for(int j=i;j<=num2;j++)
        {
            if((i^j)>=ans)
                ans = (i^j);
        }
    }
    printf("%d",ans);


}

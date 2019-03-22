#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdarg.h>
void main()
{
    int inputLength=0;
    int temp=0;
    int occurence1=0;
    int occurence2=0;
    int IndexOccurence1=0;
    int IndexOccurence2=0;
    int use1;
    int use2;
    int finalLength=0;
    printf("Enter the length of the Input String : ");
    scanf("%d",&inputLength);
    finalLength=inputLength;
    printf("Enter the elements of the String :");
    char inputString[inputLength];
    int ASCIIArray[inputLength];
    int countArray[26];
    for(int i=0;i<26;i++)
        countArray[i]=0;
    int ASCIIIndex=0;
    scanf("%s",&inputString);
    for(int i=0;i<inputLength;i++)
    {
        temp=inputString[i];
        ASCIIIndex=temp-97;
        countArray[ASCIIIndex]++;
        ASCIIArray[i]=temp;

    }
    for(int i=0;i<26;i++)
    {
        if(occurence1<countArray[i])
        {
            occurence1=countArray[i];
            IndexOccurence1=i;
        }
    }

    for(int i=0;i<26;i++)
    {
        if((occurence2<countArray[i]) && (i!=IndexOccurence1) )
        {
            occurence2=countArray[i];
            IndexOccurence2=i;
        }
    }
    use1=(IndexOccurence1+97);
    use2=(IndexOccurence2+97);

    for(int i=0;i<finalLength;i++)
    {
        if((use1!=ASCIIArray[i]) && (use2!=ASCIIArray[i]))
        {
            for(int j=i;j<finalLength;j++)
            {
                inputString[j]=inputString[j+1];
                ASCIIArray[j]=ASCIIArray[j+1];
            }
            finalLength--;
            i=i-1;
        }
    }
    printf("The string is : %s",inputString);
    printf("The length of the String by now is : %d",finalLength);


    int i=0;
    while(i<finalLength)
    {
        if(inputString[i]==inputString[i+1])
        {
            for(int j=i;j<finalLength;j++)
            {
                inputString[j]=inputString[j+1];
            }
            finalLength--;
            i=i-1;
        }
        i++;

    }
    printf(" \n The final Length  is : %d",finalLength);
    printf("The string is  %s",inputString);

}

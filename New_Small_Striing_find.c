#include <stdlib.h>
#include <stdio.h>

void main()
{
    char long_string[100];
    char short_string[100];
    int length_long;
    int length_short;
    int pos;
    printf("Enter the longer string \n");
    scanf("%s",&long_string);
    printf("The string is : %s \n",long_string);
    length_long=strlen(long_string);
    printf("The length of the string is :%d\n",length_long);
    printf("Enter the short string \n");
    scanf("%s",&short_string);
    printf("The short string is :%s",short_string);
    length_short=strlen(short_string);
    printf("The length of string is: %d \n",length_short);

    pos=find_position(length_short,length_long,short_string,long_string);
    if(pos!=(-1))
    printf("%d",(pos+1));
    else
    printf("-1");




}
int find_position(int temp_length_short,int temp_length_long,char temp_short[temp_length_short],char temp_long[temp_length_long])
{
int index_long=0;
int index_short=0;
int store=0;
char flag;


while(temp_long[index_long]!='\0')      //loop until the last letter of long string is encountered
{
    while(temp_short[index_short]==temp_long[index_long])       //if a letter of long string matches the letter of short string,loop to match the letters of small string with that of long string
    {
        if(!flag)                                               //if this is the first letter thats found,store that position
            store=index_long;
        index_long++;                                           //increment the index
        if(index_short<temp_length_short)
            index_short++;
        flag=1;                                                 // flag to indicate that the first letter of small string was matched and the position is stored
        if(temp_short[index_short]=='\0')                       //if the entire short string matched the part of the long string
        {
             return store;
             break;

        }
    }

index_long++;                                               //increment index
flag=0;                                                     //in case only a part of the small string matched the long string.
if(index_long<temp_length_long)
    index_short=0;                                          //make the small string index as 0.

else
    return -1;                                              //if the entire small string was not found in the long string.


}






}

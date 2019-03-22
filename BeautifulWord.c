#include <stdio.h>
#include <stdlib.h>

//Beautiful Word.
//To check if :
// 1- two consecutive characters of the string are same.
// 2- two consecutive characters of the string are vowels.
// if yes: the word is not beautiful, else it is beautiful.

int main()
{
    char word[50];
    printf("Enter the word:");
    int decider=0;
    scanf("%s",&word);
    int i=0;
    while(word[i]!='\0')
    {
        if(word[i]==word[i+1])
        {
            decider=1;
            break;
        }
        else if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='u' || word[i]=='o' || word[i]=='y' )
        {
            if(word[i+1]=='a' || word[i+1]=='e' || word[i+1]=='i' || word[i+1]=='u' || word[i+1]=='o' || word[i+1]=='y')
            {
                decider=1;
                break;
            }
        }
        i++;
    }
    if(decider==1)
    {
        printf("The word is not beautiful");
    }
    else
        printf("The word is beautiful");

}


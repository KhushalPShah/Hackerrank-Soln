#include <stdlib.h>
#include <stdio.h>

void main()
{
char eqn[100]="7*2-9/3+5";          //hard-coded equation
int i=0;                            //index for loop
int number[20];                     //array for storing the numbers in the equation
char sign[20];                      //String to store the signs in the equation.
int used[20];                       //used as a array of flags.
int term=0;                         //to store the answer after each arithmetic operation.
int temp=1;                         //following 3 are temporary used with index i.
int temp2=1;
int temp_store=0;

for(i=0;i<20;i++)                   //for for clearing the array and the string from any garbage value. max Value limited to 20.
{
    number[i]=0;
    sign[i]='\0';
    used[i]=2;                      //Initializing to 2 because each term must be used only twice in the entire operation.
}
i=0;
while(eqn[i]!='\0')                 //loop for initialization of Number array and sign String.
{
    printf("%c   ",eqn[i]);         //Display the hard-coded equation.
    if(i%2==0)                      //take the number(at even positions) from the equation.
        number[i]=(eqn[i]-48);      //convert the number in the string format into int number and then store in the array.
    else
        sign[i]=eqn[i];             //at Odd places, signs to be stored in the SIGN string.

    i++;
}


i=1;
while(sign[i]!='\0')                //loop for checking the entire string for any Division sign.
{
    if(sign[i]=='/')                //if the sign is Division.
    {
        if((used[i-1]==2) && (used[i+1]==2))    //if the number on either sides of the sign is not used for a single time.
            term=number[i-1]/number[i+1];       //store the calculation between the number on either side in TERM.
        else                                    //if number on either side is used for at least once.
        {
            while(used[i-temp]==0)              //find a number which is not used for a single time on the left side of sign.
                temp=temp+2;

            while(used[i+temp2]==0)              //find a number which is not used for a single time on the right side of sign.
                temp2=temp2+2;

            term=number[i-temp]/number[i+temp2];    //store the calculated value.
            used[i-temp]--;                         //decrement used count for the number used.
        }
        if(used[i-1]!=0)                            //USED[i-1]will be the place where my answer will be stored. so it will used the next time. so its USED should not be 0.
            used[i-1]--;                            //if not 0, decrement.
        else
            used[i-1]++;                           //if 0,increment.(since it has to be used the next time)
        used[i+1]=0;                               //make the USED count of the number to the left side of the count as 0. Since it wont be used.
        number[i-1]=term;                          //store the calculated answer at the left side of the sign in the NUMBER array.
        printf("%d  ",number[i-1]);
    }
    i=i+2;                                         //look for next sign.
}


i=1;
temp=1;
temp2=1;
while(sign[i]!='\0')
{
    if(sign[i]=='*')
    {
        if((used[i-1]==2) && (used[i+1]==2))
            term=number[i-1]*number[i+1];
        else
        {
            while(used[i-temp]==0)
                temp=temp+2;

            while(used[i+temp2]==0)
                temp2=temp2+2;

            term=number[i-temp]*number[i+temp2];
            used[i-temp]--;
        }
        if(used[i-1]!=0)
            used[i-1]--;
        else
            used[i-1]++;

        used[i+1]=0;
        number[i-1]=term;
        printf("%d  ",number[i-1]);
    }
    i=i+2;
}

temp=1;
temp2=1;
i=1;
while(sign[i]!='\0')
{
    if(sign[i]=='+')
    {
        if((used[i-1]==2) && (used[i+1]==2))
            term=number[i-1]+number[i+1];
        else
        {
            while(used[i-temp]==0)
                temp=temp+2;

            while(used[i+temp2]==0)
                temp2=temp2+2;

            term=number[i-temp]+number[i+temp2];
            used[i-temp]--;
        }

        if(used[i-1]!=0)
            used[i-1]--;
        else
            used[i-1]++;
        used[i+1]=0;
        number[i-1]=term;
        printf("%d  ",number[i-1]);
    }
    i=i+2;
}

temp=1;
temp2=1;
i=1;

while(sign[i]!='\0')
{
    if(sign[i]=='-')
    {
        if((used[i-1]==2) && (used[i+1]==2))
            term=number[i-1]-number[i+1];
        else
        {
             while(used[i-temp]==0)
                temp=temp+2;

            while(used[i+temp2]==0)
                temp2=temp2+2;

            term=number[i-temp]-number[i+temp2];
            used[i-temp]--;
        }

        if(used[i-1]!=0)
            used[i-1]--;
        else
            used[i-1]++;

        used[i+1]=0;
        number[i-1]=term;
        printf("%d  ",number[i-1]);
    }
    i=i+2;
}
printf("The ans is %d",term);
}














































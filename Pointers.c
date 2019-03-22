#include <stdlib.h>
#include <stdio.h>

void main()
{
int *ptr;
int a=10;
ptr=&a;
printf("%d \t",ptr);        //displays Address of the variable it points to.
printf("%d \n",*ptr);          //displays the value of the variable it points to.
test("ABC");
getch();

}
void test(char *p)
{
    int i=0;
    printf("Start %d \n",p);    //
    while(p[i])
    {
        char *temp;
        temp=&p[i];
        printf("At P: %d",temp);
        printf("p=%d",p[i]);       //displays address of A.
        printf("c=%c",p[i]);      //displays A
        printf("i=%d \n",p[i]);      //displays ASCII of A.
        i++;

    }
}
/*PLease read the following:
    The function TEST passes the array,and it does so by passing the pointer of the array. Thus the pointer p has A in it and
    only-p has the address of the array in it.
    The address of the beginning of the array is displayed by START.
    Then the loop runs until the string is over.
    each time the software goes inside the loop, it displays:
    the value where the pointer to the string is, and the content of the String and its ASCII value.
    Thus the main thing is:
    To display a String, we pass the pointer of its first character and the rest is done by the function which is called.

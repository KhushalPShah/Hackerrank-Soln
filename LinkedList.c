#include <stdio.h>
#include <stdlib.h>

//reference:Single Linked List operations by Naresh iTechnology.

struct Node                     //User defined Data Type.
{
    int value;
    struct Node *nextNode;      //Pointer to the Next node.
};


int main()
{
  struct Node* root=NULL;       //Head node.
  root=(struct Node*)malloc(sizeof(struct Node));   //Malloc will return the address of the memory assigned.
                                                    //Type cast the value to the form of a pointer to structure.
 //function to add a Node.
    void addToLink(int data)
    {
        struct Node *newNode;
        newNode=(struct Node*)malloc(sizeof(struct Node));      //store the address of the new Node allocated in memory.
        newNode->value=data;                                    //store the data passed in the value of the structure.
        newNode->nextNode=NULL;                                 //store the next Links Address as Null.

        if(root==NULL)                                          //if the root was pointing to NULL, i.e. it was the first node
            root=newNode;                                       //Then:now copy the node to root.Thus adding to a link.
        else
            struct  Node *temp;                                 //temporary Node address.
            temp=root;                                          //store the root node
            while(temp->nextNode!=NULL)                         //Until the last node is reached.
                temp=temp->nextNode;                            //keep moving to the next node.
            temp->nextNode=newNode;                             //for the lastly entered node,add the next link.


    }
    void printListData(struct Node *HeadNode)
    {
        while(HeadNode->nextNode!=NULL)
        {
            printf("The Value is : %d"&HeadNode->value);
            HeadNode=HeadNode->nextNode;
        }

    }

}


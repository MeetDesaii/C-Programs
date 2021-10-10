// Create a C program to create a linked list and print it's all elements to traverse a linked list...

#include<stdio.h>
#include<stdlib.h>

 // Self-referencing structure...
struct Node{
    int data;
    struct Node *link;
};

void Traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("\n* Element : %d \t\t-> It's Address : %d", ptr->data, ptr);
        ptr = ptr->link;
    }
}

int main(){

    struct Node *headNode;
    struct Node *secondNode;
    struct Node *thirdNode;
    struct Node *fourthNode;
    struct Node *lastNode;

    headNode = (struct Node*) malloc(sizeof(struct Node));
    secondNode = (struct Node*) malloc(sizeof(struct Node));
    thirdNode = (struct Node*) malloc(sizeof(struct Node));
    fourthNode = (struct Node*) malloc(sizeof(struct Node));
    lastNode = (struct Node*) malloc(sizeof(struct Node));

    // link first and second nodes...
    headNode->data = 7;
    headNode->link = secondNode;
    
    // link second and third nodes...
    secondNode->data = 17;
    secondNode->link = thirdNode; 

    // link third and fourth nodes...
    thirdNode->data = 27;
    thirdNode->link = fourthNode;
    
    // link fourth and last nodes...
    fourthNode->data = 37;
    fourthNode->link = lastNode;
    
    // terminate the list at the last node... (Last Node points NULL)
    lastNode->data = 47;
    lastNode->link = NULL;

    Traversal(headNode);    

    return 0;
}

// Linked list is a collection of nodes. where in node, one part is a data of the linked list and second part is a pointer who points to the next node...

// Array is best in it's way and Linked list is also best in it's way...s
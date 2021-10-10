// Write a C Program to create a Circular Linked List using Data Structure concepts...

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void printLinkedList(struct Node *first){
    struct Node *ptr = first;

    do{
        printf("\nElement : %d  (Address : %d)",ptr->data,ptr);
        ptr = ptr->next;
    }
    while(ptr!=first);
}

struct Node* insertAtFirst(struct Node *first){
    struct Node *newFirst;
    struct Node *p = first->next;
    newFirst = (struct Node*) malloc(sizeof(struct Node));

    printf("\nEnter an Element : ");
    scanf("%d",&(newFirst->data));

    while((p->next) != first){
        p = p->next;
    }
    // Here p points to the last node of the circular linked list...

    newFirst->next = first;
    p->next = newFirst;

    return newFirst;
}

int main(){

    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    first = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));

    first->data = 3;
    first->next = second;
    
    second->data = 27;
    second->next = third;
    
    third->data = 89;
    third->next = fourth;
    
    fourth->data = 43;
    fourth->next = fifth;
    
    fifth->data = 98;
    fifth->next = first;

    printf("\n\n\t\t\t*** Linked List before insetion ***\n");
    printLinkedList(first);

    printf("\n\n\t\t\t*** Linked List after insetion ***\n");
    first = insertAtFirst(first);
    printLinkedList(first);
    return 0;
}


// insertion, deletion concepts of linked list and circular linked lists are mostly same...
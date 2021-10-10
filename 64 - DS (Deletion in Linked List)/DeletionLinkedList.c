// Create a C program to do Deletion operation in Linked List...

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void beforeDeletionLinkedList(struct Node *ptr){
    printf("\n\t\t\t*** Linked List before Deletion ***\n");
    while(ptr != NULL){
        printf("\nElement : %d  (Address : %d)", ptr->data, ptr);
        ptr = ptr->next;
    }
}

void afterDeletionLinkedList(struct Node *ptr){
    printf("\n\t\t\t*** Linked List before Deletion ***\n");
    while(ptr != NULL){
        printf("\nElement : %d  (Address : %d)", ptr->data, ptr);
        ptr = ptr->next;
    }
}

struct Node* deletionOfTheFirstNode(struct Node *head){
    
    struct Node *ptr = head;
    head = head->next;
    free(ptr);           // free() is used to release a memory...
    return head;
}

struct Node* deletionOfTheLastNode(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while((q->next) != NULL){
        p = p->next;
        q = q->next;
    }   
    p->next = NULL;
    free(q);
    return head;
}

struct Node* deletionNodeInBetween(struct Node *head){
    struct Node *p = head;
    int index;
    printf("\nEnter an Index of Node to delete : ");
    scanf("%d",&index);

    int i = 0;
    while (i != index-1){
        p = p->next;
        i++;
    }
    struct Node *q = p->next;            // This is different logic...
    p->next = q->next;
    free(q);
    return head;
}

int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    int choice;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));

    head->data = 3;
    head->next = second;
    
    second->data = 27;
    second->next = third;
    
    third->data = 89;
    third->next = fourth;
    
    fourth->data = 43;
    fourth->next = fifth;
    
    fifth->data = 98;
    fifth->next = NULL;

    beforeDeletionLinkedList(head);

    printf("\n-----------------------------------------------------------------------\n");
    printf("\n\n\t\t\t *** Deletion in Linked List ***\n");
    printf("\n1. Deletion of the first node");
    printf("\n2. Deletion a node in between");
    printf("\n3. Deletion of the last node");
    printf("\n\n\t\t\t*** Powered by CodeXBlackPearl ***");
    printf("\n-----------------------------------------------------------------------");

    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            head = deletionOfTheFirstNode(head);
            afterDeletionLinkedList(head);
            break;

        case 2:
            head = deletionNodeInBetween(head);
            afterDeletionLinkedList(head);
            break;

        case 3:
            head = deletionOfTheLastNode(head);
            afterDeletionLinkedList(head);
            break;

        default:
            printf("\nPlease ! Enter a valid input... !!");
    }
    return 0;
}

// This is so complicated program and this is a program of data structure or advanced C... You have to clear all fundamentals of pointers and linked list and complete C Programming to create and understand this program...

// Insetion and Deletion in Linked List are so competitive & logical questions... There are so different types of logic are used to do perfect insertion & deletion operations....  
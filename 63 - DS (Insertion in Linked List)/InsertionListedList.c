// Create a C program to do Insertion operation in Linked List...

#include<stdio.h>
#include<stdlib.h>

// Self-referencing structure...
struct Node{
    int data;
    struct Node *next;
};

void beforeInsertionLinkedList(struct Node *ptr){
    printf("\n\t\t\t*** Linked List before Insertion ***\n");
    while(ptr!=NULL){
        printf("\n* Element : %d (Address -> %d)", ptr->data, ptr);
        ptr = ptr->next;
    }
}

void afterInsertionLinkedList(struct Node *ptr){
    printf("\n\t\t\t*** Linked List after Insertion ***\n");
    while(ptr!=NULL){
        printf("\n* Element : %d (Address -> %d)", ptr->data, ptr);
        ptr = ptr->next;
    }
}

// Method for Insertion at the beginning...
struct Node* insertionAtBeginning(struct Node *head){
    struct Node *ptr;
    ptr = (struct Node*) malloc(sizeof(struct Node));

    printf("\nEnter a Data which you want to add : ");
    scanf("%d",&(ptr->data));

    ptr->next = head;             // Here we setting up new head by this logic...
    return ptr;
}

// Method for Insertion at the end...
void insertionAtEnd(struct Node *head, struct Node *fifth){
    struct Node *sixth;
    sixth = (struct Node*) malloc(sizeof(struct Node));

    printf("\nEnter a Data which you want to add : ");
    scanf("%d",&(sixth->data));

    fifth->next = sixth;
    sixth->next = NULL;
}

// Method for Insertion between two nodes...
struct Node* insertionBetweenNodes (struct Node *head){
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node *p = head;
    int index;
    int data;

    printf("\nEnter a Data which you want to add : ");
    scanf("%d",&(ptr->data));

    printf("Enter an Index to store data : ");
    scanf("%d",&index);

    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

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

    beforeInsertionLinkedList(head);

    printf("\n-----------------------------------------------------------------------\n");
    printf("\n\n\t\t\t *** Insertion in Linked List ***\n");
    printf("\n1. Insertion at the beginning");
    printf("\n2. Insertion between two nodes");
    printf("\n3. Insertion at the end");
    printf("\n\n\t\t\t*** Powered by CodeXBlackPearl ***");
    printf("\n-----------------------------------------------------------------------");

    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            head = insertionAtBeginning(head);
            afterInsertionLinkedList(head);
            break;

        case 2:
            head = insertionBetweenNodes(head);
            afterInsertionLinkedList(head);
            break;

        case 3:
            insertionAtEnd(head, fifth);
            afterInsertionLinkedList(head);
            break;

        default:
            printf("Enter a valid input...");
    }

    return 0;
}

// This is so complicated program and this is a program of data structure or advanced C... You have to clear all fundamentals of pointers and linked list and complete C Programming to create and understand this program... 
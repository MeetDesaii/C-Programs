// Write a C program to explain all fundamentals about doubly linked list of data structure concepts...

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *previous;
    struct Node *next;
};

void printDoublyLinkedListBeforeInsertion(struct Node *head){

    struct Node *ptr = head;
    printf("\n\t\t\t*** Doubly Linked List before Insertion ***\n");

    do{
        printf("\nElement : %d  (Address : %d)", ptr->data, ptr);
        ptr = ptr->next;
    }
    while((ptr->next)!=NULL);
    printf("\nElement : %d  (Address : %d)", ptr->data, ptr);
}

void printDoublyLinkedListAfterInsertion(struct Node *head){

    struct Node *ptr = head;
    printf("\n\t\t\t*** Doubly Linked List After Insertion ***\n");
    
    do{
        printf("\nElement : %d  (Address : %d)", ptr->data, ptr);
        ptr = ptr->next;
    }
    while((ptr->next)!=NULL);
    printf("\nElement : %d  (Address : %d)", ptr->data, ptr);
}

struct Node* insertionAtTheBeginning(struct Node *head){
    
    struct Node *newHead = (struct Node*) malloc(sizeof(struct Node));

    printf("\nEnter a Data which you want to add : ");
    scanf("%d",&(newHead->data));

    newHead->previous = NULL;
    newHead->next = head;

    return newHead;
}

struct Node* insertionAtTheEnd(struct Node *head){
    
    struct Node *last = (struct Node*) malloc(sizeof(struct Node));
    struct Node *ptr = head;

    while((ptr->next) != NULL){
        ptr = ptr->next;
    }

    printf("\nEnter a Data which you want to add : ");
    scanf("%d",&(last->data));

    ptr->next = last;
    last->next = NULL;

    return head;
}

struct Node* insertionBetweenTwoNodes(struct Node *head){

    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node *p = head;
    int index;

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

    head->data = 12;
    head->previous = NULL;
    head->next = second;

    second->data = 23;
    second->previous = head;
    second->next = third;

    third->data = 34;
    third->previous = second;
    third->next = fourth;

    fourth->data = 45;
    fourth->previous = third;
    fourth->next = fifth;

    fifth->data = 56;
    fifth->previous = fourth;
    fifth->next = NULL;

    printDoublyLinkedListBeforeInsertion(head);

    printf("\n-----------------------------------------------------------------------\n");
    printf("\n\t\t\t *** Insertion in Doubly Linked List ***\n");
    printf("\n1. Insertion at the beginning");
    printf("\n2. Insertion between two nodes");
    printf("\n3. Insertion at the end");
    printf("\n\n\t\t\t    *** Powered by CodeXBlackPearl ***");
    printf("\n-----------------------------------------------------------------------");

    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            head = insertionAtTheBeginning(head);
            printDoublyLinkedListAfterInsertion(head);
            break;

        case 2:
            head = insertionBetweenTwoNodes(head);
            printDoublyLinkedListAfterInsertion(head);
            break;

        case 3:
            head = insertionAtTheEnd(head);
            printDoublyLinkedListAfterInsertion(head);
            break;

        default:
            printf("\nInvlid Input !!");
    }

    return 0;
}


// If you're able to create program to insertion in doubly linked list so you can also do deletion operation also because that is so similar to this operation !!...
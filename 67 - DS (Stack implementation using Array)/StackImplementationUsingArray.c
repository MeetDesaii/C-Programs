// Create a C program of data structure to implement stack using Array...

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *st){
    if(st->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *st){
    if(st->top >= (st->size - 1)){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *st, int data){
    if(isFull(st)){
        printf("\nStack Overflow !! (Cannot push %d to the stack)",data);
    }
    else{
        st->top++;
        st->arr[st->top] = data;
        printf("\n\t\t+++  (%d pushed successfully !!)", data);
    }
}

int pop(struct stack *st){
    if(isEmpty(st)){
        printf("\nStack Underflow !! (Cannot pop from the stack)");
        return 0;
    }
    else{
        int value = st->arr[st->top];
        st->top--;
        return value;
    }
}

int main(){

    struct stack *st = (struct stack*) malloc(sizeof(struct stack));
    st->size = 7;
    st->top = -1;
    st->arr = (int*) malloc((st->size) * sizeof(int));

    push(st, 34);
    push(st, 56);
    push(st, 67);
    push(st, 98);

    printf("\n\t\t---  (%d popped successfully !!)", pop(st));
    printf("\n\t\t---  (%d popped successfully !!)", pop(st));

    return 0;
}


// isEmpty(), isFull(), push(), pop() method creation and method concepts are so important...

// That's how we are implementing of stack using array... and stack so used data structure method... this concept about method is so important for interviews and data structure fundamentals...

// This is so logical fundamental in data structure...

// This structure is working on Last in First out(LIFO) order...
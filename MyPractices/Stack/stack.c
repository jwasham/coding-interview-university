#include <stdio.h>
#define size    5
// Stack requires :
// push() | pop()

typedef struct stack{
    int top;
    int stack[size];
    int item;
}stack;

void push(stack s, int item);
int pop(stack s);
void display(stack s);
void stack_init(stack *s);

void main(){
    stack* s;
    stack_init(&s);
    push(s, 5);
    display(s);
    return;
}

void stack_init(stack* s){
    s->top = 0;
}

void push(stack* s, int item){
    if(s->top>size-1){
        printf("Stack Overflow. Stack is full.\n");
    }
    else{
        s->item = item;
        s->stack[s->top++] = s->item;
    }
}

int pop(stack* s){
    int item;
    if(s->top==-1){
        printf("Stack Underflow. Stack is empty.\n");
    }
    else{
        item = s->stack[s->top--];
    }
    return item;
}

void display(stack* s){
    for(int i=0; i<s->top+2;){
        printf("TOP : %d i : %d\n", s->top, i);
        printf("%d\n", s->stack[i]);
        i++;
    }
    return;
}
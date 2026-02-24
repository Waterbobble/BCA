#include <stdio.h>
#define max 10

typedef struct Stack{
    int item[max];
    int top;
}stack;

void push(stack *s,int);

void pop(stack *s);

int main(void){
    stack newstack;
    newstack.top =-1;
    int choice,info;
    printf("what operation will you like to do? \n 1. push \n 2. pop");
    scanf("%i",&choice);
    switch(choice){
        case 1:
            printf("Enter number to push:");
            scanf("%i",&info);
            push(&newstack,info);
            break;

        case 2:
            pop(&newstack);
            break;   
        default:
            printf("Error:");
    }
    return 0;
}
void push(stack *s,int info){
    if(s->top==max){
        printf("The stack is OverFlow");}
    else{
        s->top++;
        s->item[s->top]=info;
    }

}

void pop(stack *s){
    if (s->top<0){
        printf("The stack is Empty");}
    else{
        s->top--;
    };
}



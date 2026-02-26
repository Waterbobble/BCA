#include <stdio.h>
#include <stdlib.h>

struct Nodes{
    int data;
    struct Nodes *next;
}typedef nodes;

int main(void){
    nodes *first;
    first=malloc(sizeof(nodes));
    first->data=100;
    first->next=NULL;

    nodes *second;
    second=malloc(sizeof(nodes));
    second->data=200;
    second->next=NULL; 

    first->next=second;

    nodes *temp= first;

    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

}
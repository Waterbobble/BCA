#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
}node;

int main(void){
    node *head=NULL;
    node *temp=NULL;    
    for (int i=1;i<=5;i++){
    node *newNode = malloc(sizeof(node));
    newNode->value=i*100;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        temp=head;
    }
    else{
        temp->next=newNode;
        temp=newNode;
    }
    }
    temp=head;
    while(temp->next!=NULL){
        printf("%d -> ",temp->value);
        temp=temp->next;
    }
    printf("End of list");
return 0;    

}
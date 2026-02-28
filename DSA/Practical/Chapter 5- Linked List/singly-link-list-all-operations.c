#include <stdio.h>
typedef struct Node{
    int data;
    struct Node *next;
}node;

int insert_first(node *x,node *y,node *z);
int insert_end(node *x,node *y,node *z);
int insert_any(node *x,node *y,node *z);
int delete_first(node *x, node *y,node *z);
int delete_end(node *x, node *y, node z);
int delete_any(node *x, node *y,node *z);

int main(void){
    node *head=NULL;
    node *temp=NULL;
    node *last=NULL;
    node *newNode=NUll;
    int choice=0;
    printf("Welcome to the Program.\n");
    printf("Select the Operation you want to do.\n");
    printf("1. Insert data at the begining ofthe list.\n2. Insert data at the end of the list.\n3. Insert data at a specific location.\n4. Delete data at the begining of the list.\n5. Delete data at the end of the list.\n6. Delete data at specific lotaciton.\n ");
    scanf("%d",&choice);

switch(choice){
    case 1:
        insert_first(head,temp,newNode);
        break;
    
    case 2:
        insert_end(head,last,newNode);
        break;

    
    case 3:
        insert_any(head,temp,newNode);
        break;

    
    case 4:
        delete_first(head,temp,newNode);
        break;

    
    case 5:
        delete_end(head,temp,newNode);
        break;

    
    case 6:
        delete_any(head,temp,newNode);
        break;

    defult:
        printf("Error choice invalid:\n");
        break;
    
}


return 0;
}

int insert_first(head,temp,newNode){
    newNode=malloc(sizeof(node));
    head=newNode;
    temp=newNode;
    printf("Enter the number you want to enter at the begining of the list.\n");
    scanf("%d",temp->data);
    temp=temp->next;
    head=temp;
    return 0;
}

int insert_end(head,last,newNode){
    newNode=malloc(sizeof(node));
    int value=0;
    printf("Enter the number you want to enter at the END of the list.\n");
    scanf("%d",value);
    newNode->data=value;
    if(head==last==NULL){ 

    }




}
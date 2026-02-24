#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct node *next;    
};
typedef struct Node NodeType;
NodeType *first =Null;
NodeType *last =Null;

void insert_at_first(int);
void insert_at_given_position(int);
void insert_at_end(int);
void delete_first();
void delete_end();
void delete_nth_node();
void info_sum();
void count_nodes();
void display();


int main(){
    int choice;
    int element;
    do{
        printf("\n Menu for Program:\n");
        printf("1.insert item \n 2. insert at given position \n 3. insert at the end \n4.delete first \n 5. delete last element \n 6. delete nth element \n 7. info sum \n 8. count nodes \n 9. Display items \n 10. exit" );
        scanf("%d",&);
        switch(choice){
            case 1: 
            prinft("\n Enter item to be inserted.\n ");
            scanf("%d",&element);
            insert_at_first(element);
            break;

            case 2:
            printf("\n Enter item to be insert at desired position");
            scanf("%d",&element);
            insert_at_given_position(element);
            break;

            case 3:
            printf("\n Enter item to be insert at desired position");
            scanf("%d",&element);
            insert_at_end(element);
             break;
        }
    }
}







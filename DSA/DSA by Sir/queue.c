#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct Queue{
    int rear,front;
    int queue[SIZE];
}qe;

void insterItem(qe *);
void deleteItem(qe *);
void displayItem(qe *);

int main(){
    int choose;
    qe *q =(qe *) malloc(sizeof(qe));
    if (q==NULL){
        printf("Memory allocation failed\n");
    }
    q->rear=-1;
    q->front=0;
        printf("\n Menu for programs:\n");
        printf("\n \n 1.insert, 2.delete 3.display :\n\n");
    do{
        printf("\n Enter the Choice:\n");
        scanf("%d",&choose);
        switch(choose){
            case 1:
            insterItem(q);
            break;
            case 2:
            deleteItem(q);
            break;
            case 3:
            displayItem(q);
            break;
            default:
            printf("Your choise is Invalid\n");
        }
    }
        while(choose<10);
        return 0;  
    
}

    void insterItem(qe *q){
        int ele;
        printf("Enter the data to be iserted\n\n");
        scanf("%d",&ele);
        if(q->rear== SIZE -1){
            printf("Queue is Full/n");

        }
        else{
            q->rear ++;
            q->queue[q->rear ]= ele;

        }
    }
void deleteItem(qe *q){
    int ele;
    if(q->rear<q->front){
        printf("Queue is Empty/n");
    }
    else{
        printf("Delete item is/n");
        ele = q->queue[q->front];
        q->front++;
        printf("Deleted item is %d",ele);

    }
}

    void displayItem(qe *q){
        int i;
        if(q->rear <q->front){
            printf("Queue is Empty");
        }
        else{
            for(i=q->front;i<q->rear;i++){
                printf("\n %d \n",q->queue[i]);
            }
        }
}

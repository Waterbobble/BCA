#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 10
struct CircularQueue{
    int item[SIZE];
    int rear;
    int front;
};
typedef struct CircularQueue cQueue;

void insertQueue(cQueue *);
void deleteQueue(cQueue *);
void displayQueue(cQueue *);

int main(){
    int choose;
    cQueue *temp =malloc(sizeof(cQueue)); //memory allocation
    temp->rear=SIZE -1;
    temp->front=SIZE -1;
    //clrscr();
    printf("Enter the Number for the Operation:\n");
    printf("1: Enqueue \n 2.Deqeue \n 3. Display");
    do{
    printf("Enter Your choice");
    scanf("%d",&choose);
    switch (choose){
        case 1:
        insertQueue(q);
        break;

        case 2:
        deleteQueue(q);
        break;

         case 3:
        displayQueue(q);
        break;

        default:
        printf("Invalid Choise");
        break;
    }
    }
    while(choose<100);
    getch();
    return 0;
}

void insertQueue(cQueue *q){
    int ele;
    if((q-> rear+1) % SIZE == q-> front) {
        printf("Queue is Full");
    }//REAR=9;0==
    else{
        q->rear= (q->rear+1)%SIZE;
        printf("Enter the Element to insert");
        scanf("%d",&ele);
        q->item[rear]=ele;
    }
}

void deleteQueue(cQueue *q){
    if(q->rear==q->front){
        printf("Queue is Empty");
    }
    else{
        q->front=(q->fornt+1)%SIZE;
        printf("Queue is Empty");
        printf("%d is deleted",q->item[q->front]);
    }

}

void displayQueue(cQueue *q){
    int i;
    if(q-> rear==q->front){
        printf("queue is empty");
    }
    else{
        printf("item of queue are\n");
        for(i=(q->front+1)%SIZE;i !=q->; i=(i+1)%){
            printf("%d \t", q->item[i]);
        }
        printf("%d \t",q->item [q->rear]);
    }
}


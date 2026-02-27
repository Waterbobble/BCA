#include <stdio.h>

struct Node_single_list {
    int actual_data;
    struct Node_single_list *pointer2next;
}typedef node;

int main (void){
    node first_node,second_node,third_node,fourth_node;
    
    
    first_node.actual_data=100;
    second_node.actual_data=200;
    third_node.actual_data=300;
    fourth_node.actual_data=400;


    first_node.pointer2next=&second_node;
    second_node.pointer2next=&third_node;
    third_node.pointer2next=&fourth_node;
    fourth_node.pointer2next=NULL;

    node *temp= &first_node;
    while (temp !=NULL){
        printf("%d\n",temp->actual_data);
        temp=temp->pointer2next;
    }
    printf("End of the list.\n");

    return 0;
  
    
}
#include <stdio.h>

struct Node_single_list {
    int actual_data;
    struct Node_single_list *pointer2next;
}typedef node;

int main (void){
    node first_node,second_node,third_node,fourth_node;
    first_node.pointer2next=&second_node;
    second_node.pointer2next=&third_node;
    fourth_node.pointer2next=NULL;
    
}
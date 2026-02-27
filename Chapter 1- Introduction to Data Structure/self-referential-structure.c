#include<stdio.h>

struct Node {
    int x;
    struct Node *pointer2next;
};
int main(void){
    struct Node FirstNode,SecondNode;
    FirstNode.pointer2next=&SecondNode;
    
}
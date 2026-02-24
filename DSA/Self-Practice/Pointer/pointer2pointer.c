#include <stdio.h>

int main (void){
    int value = 100;
    int *fpointer=&value;
    int **spointer=&fpointer;
    printf("the value is %d",**spointer);
    return 0;
}
#include<stdio.h>

int *arr(void);

int main(void){
    
    int i;
    int *p;
    p=arr();
    for(i=0;i<5;i++){
        printf("%d",p[i]);
    }
}

int *arr(void){
    int i=0;
    static int array[5];
    
    for(i=0;i<5;i++){
        array[i]=i+1;
    }
    return array;
}
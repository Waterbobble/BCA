#include<stdio.h>

int main (void){
    int array[10]={1,2,3,4,5,6,7,8,9,10},n,i;
    printf("Enter the position you want to enter ");
    scanf("%d",&n);
    printf("Enter the element you want to enter ");
    scanf("%d",&array[n-1]);
    for(i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
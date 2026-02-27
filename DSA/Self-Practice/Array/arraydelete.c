#include<stdio.h>

int main (void){
    int array[10]={1,2,3,4,5,6,7,8,9,10},n,i;
    printf("Enter the position of the element you want to delete ");
    scanf("%d",&n);
    for(i=n-1;i<10;i++){
        array[i]=array[i+1];
    }
    for(i=0;i<10-1;i++){
    printf("%d ",array[i]);
}
    return 0;
}
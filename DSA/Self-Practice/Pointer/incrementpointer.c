#include<stdio.h>

int main(void){
    int array[]={1,2,3};
    int *arr,i;
    arr=array;
    for (i=0;i<3;i++){
        printf("The address of  array [%d]: is  %x\n",i,arr);
        printf("The actual data of array [%d]: is %d\n", i , *arr);
        arr++;
    }
    return 0;
}
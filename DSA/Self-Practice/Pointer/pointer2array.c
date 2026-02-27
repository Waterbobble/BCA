#include<stdio.h>


int main(void){
    int i;
    int arr[]={100,200,300};
    int *ptr;
    ptr=&arr[0];

    for(i=0;i<3;i++){
        printf("arr[%d] = %d \n", i,*(ptr+i));
    }
    return 0;

}
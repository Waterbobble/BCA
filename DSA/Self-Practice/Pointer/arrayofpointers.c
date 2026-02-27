#include <stdio.h>

int main (void) {
    int arr[5]={100,200,300,400,500};
    int *arrptr[5];
    int i;
    arrptr[0]=&arr[0];
    for (i=0;i<5;i++){
        arrptr[i]=&arr[i];
        printf(" the array of arr[%d] hold value of %d \n",i,*arrptr[i]);
    }
return 0;

}
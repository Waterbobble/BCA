#include <stdio.h>
int main(void){
    int array[5]={1,2,3,4,5},barray[5]={6,7,8,9,10},carray[10],i,j=0;
    for(i=0;i<10;i++){
        if(i<5){
            carray[i]=array[i];
        }
        else {
            carray[i]=barray[j];
            j++;
        }
    
    }

    for(i=0;i<10;i++){
        printf("%d ",carray[i]);
    }
}
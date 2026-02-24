#include<stdio.h>

int main (void){
    int array[10];
    int *oddarray[10]={NULL};
    int *evenarray[10]={NULL};
    int i,input;
    int j=0;
    int k=1;
    int evencounter=0;
    int oddcounter=0;

    for (i=0;i<10;i++){
        printf("enter numbers : ");
        scanf("%d",&input);

        if (input %2 ==0){
            array[j]=input;
            evenarray[evencounter]=&array[j];
            j=j+2;
            evencounter++;  
        }
        else{
            array[k]=input;
            oddarray[oddcounter]=&array[k];
            oddcounter++;
            k=k+2;
        }

    }
    for(i=0;i<10;i++){
        if(oddarray!=NULL){
            printf("%d is odd \n",*oddarray[i]);
        }
        if(evenarray!=NULL){
        printf("%d is is even \n",*evenarray[i]);
        }
    }


return 0;
}
#include<stdio.h>
int main (void){
    int array[10];
    int *oarray[10];
    int *earray[10];

    int input;
    int i;
    int j=0;
    int k=1;

    for(i=0;i<10;i++){
    printf("Enter a number : ");
    scanf("%d",&input);
    if(input % 2 ==0){
        array[j]=input;
        j=j+2;
        earray[i]=&array[j];
    }
    else{
        array[k]=input;
        k=k+2;
         oarray[i]=&array[k];
    }
    
 }

 for (i=0;i<10;i++){
    printf("The even numbers are : %d \n ", *earray[i]);
 }
printf("\n");
 for (i=0;i<10;i++){
   printf("The odd numbers are : %d \n ", *oarray[i]);
}

}
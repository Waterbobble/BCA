#include <stdio.h>

int main (void){
    int xdata=100, ydata=200;
    int sum, div,multi,diff,ref;
    int *px=&xdata , *py=&ydata;
    printf("%d , %d ", *px, *py);
    int *pn=&ref;
    sum=*px + *py;
    div= *px / *py;
    multi= *px * *py;
    diff= *px - *py;
    ref=sum;

    printf("the sum is: %d \n",sum );
    printf("the divide is: %d \n",div );
    printf("the multiply is: %d\n",multi );
    printf("the difference is: %d\n",diff);
    printf("chking resignment: %d\n",ref);



    return 0;
}
#include<stdio.h>

int main(void){
    int array2d[10][10],r,c,i,j;
    printf("Enter the dimention of array (rows): ");
    scanf("%d",&r);
    printf("Enter the dimention of array (column): ");
    scanf("%d",&c);
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the %d th element of %d the row ",j,i);
            scanf("%d",&array2d[i][j]);
        }

    }

}
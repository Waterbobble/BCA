#include<stdio.h>
int main (void){
    int array[3][3]={1,1,1,2,2,2,3,3,3},r,c,i,j;
    printf("Enter the position of tthe element (row) ");
    scanf("%d",&r);
    printf("Enter the position of tthe element (col) ");
    scanf("%d",&c);
    printf("Enter the valud of the element ");
    scanf("%d",&array[r-1][c-1]);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

return 0;

}
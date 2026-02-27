#include<stdio.h>


int main(void) {
	int array[50],i,max;
	printf("Enter the size of array ");
	scanf("%d", &max);
	for(i=0;i<max;i++)
	{ 
		printf("Enter elements %d of the array ",i);
		scanf("%d", &array[i]);
	}
	printf("Your array is : \n");
   for(i=0;i<max;i++){
    printf("%d\n",array[i]);
   }
    return 0 ;

}
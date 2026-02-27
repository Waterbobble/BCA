#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main (void){
    //allocation of memory
    int *number =malloc(sizeof(int));
    int size;
    char *increase = (char *)number;
   for(int i =0;i<4;i++){
    printf("%p \n",(void *)(increase + i));
   }
   
   increase=realloc(increase,8);
   size=_msize(increase);
   printf("%d is the size of increase",size);
   free(number);

   return 0;

    
}
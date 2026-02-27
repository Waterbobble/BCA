    #include <stdio.h>

    int addition(int  , int ,float );

    int main(void){
        int  sum;
        sum=addition(100,20,32.2);
        printf("The damn function sum is : %d\n", sum);
    }

    int addition(int mk,int nut,float suckonthesenuts) {
        int sum;
        sum=mk+nut;
        return sum;
    }
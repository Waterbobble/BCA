#include <stdio.h>

int passbyvalue(int , int);
int passbyrefrence (int *,int *);

int main(void){
    int x=8,y=10;
    passbyvalue(x,y);
    passbyrefrence(&x,&y);
}

int passbyvalue(int a,int b){
    printf("x= %d\n",a);
    printf("y= %d\n",b);

}

int passbyrefrence(int *a, int *b){
    *a=*a+*a;
    *b=*b+*b;
    printf("x with ref is %d \n", *a);

    printf("y with ref is %d \n", *b);


}
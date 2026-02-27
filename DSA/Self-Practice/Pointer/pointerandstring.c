#include<stdio.h>

int main (void) {
    char eachletter[5]={'S','A','G','A','R'};
    char *name[5];
    int i;
    for(i=0;i<5;i++){
        name[i]=&eachletter[i];
        printf("%c",*name[i]);

    }
}
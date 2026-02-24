#include<stdio.h>
#include<string.h>
/*struct book{
    char title[100];
    char author[100];
    int price;
};*/

typedef struct{
    char title[100];
char author[100];
int price;
}book;

int main (void){
    book harry_potter;
    strcpy(harry_potter.title, " Goblet of fire ");
    strcpy(harry_potter.author, " J.K Rowling ");
    harry_potter.price=100;
printf("The name of the Book is : %s \n",harry_potter.title);
printf("The name of the Book's writter is : %s \n",harry_potter.author);
printf("The price of the Book is : %d",harry_potter.price);
return 0;

}
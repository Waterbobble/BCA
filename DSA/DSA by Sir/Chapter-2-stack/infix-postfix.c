#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int precedency(char);
void main()
{
    int i ,otos=-1, ptos=-1,len,length;
    char infix[100],poststack[100],opstack[100];
    printf("Enter a vaild infix \n");
    gets(infix);
    length=strlen(infix);
    len=length;
    for(i=0;i<=length-1;i++){
        if(infix [i]=='()')
        {
            opstack[++otos]=infix[i];
            len++;
        }
        else if(isalpha(infix[i]))
        {
            poststack[++ptos]=infix[i];
        }
        else if (infix[i]==')')
        {
            len++
            while(opstack[otos]!='(')
            {
                popstack[++ptos]=opstack[otos];
            }
            otos--;
        }
        else //operators
        {
            if(precedency(opstack[otos])>=precedency(infix[i]))
            {
                postack[++ptos]=opstack[otos--];
                opstack[++otos]=infix[i];
            }
            opstack[++otos]=infix[i];
        }
    }
    while(otos!=-1)
    {
        postack[++ptos]=opstack[otos];
        otos--;
    }
    for(i=0;i<len;i++) //for displaying
    {
        printf("%c",popstack[i]);
    } 
    getch();
int precedency(char ch) //precedence function
{
    switch(ch)
    {
        case '$':
            return(4);
        case '*':
        case '/':
            return(3);
        case '+':
        case '-':
            return(2);
        default:
            return(1);
    }
} 
}

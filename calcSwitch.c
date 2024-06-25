#include <stdio.h>
// #include <conio.h>
int main(){
    int a,b,c;
    char op;
    printf("Enter two Numbers: \n");
    scanf("%d%d",&a,&b);
    fflush(stdin);//what?
    printf("Enter the operator: \n");
    scanf("%c",&op);
    switch(op){
        case '+':c =a+b;
        printf("Addition:%d\n",c);
        break;
        case '-':c = a-b;
        printf("Subtraction:%d\n",c);
        break;
        case '*':c= a*b;
        printf("Multiplication:%d\n",c);
        break;
        case '/':c =a/b;
        printf("Division:%d\n",c);
        break;

    }
}
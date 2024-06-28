#include <stdio.h>
int main(){
    int a,*p;
    printf("Enter the number: ");
    scanf("x",&a);
    printf("%x\n",&a);
    p = &a;
    printf("%d\n",*p);
}
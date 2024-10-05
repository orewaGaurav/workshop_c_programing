#include <stdio.h>
int main(){
    int a,b,*p,*q,sum;
    p = &a;
    q = &b;
    printf("Enter the two numbers to add: ");
    scanf("%d %d",&a,&b);
    sum = *p + *q;
    printf("The sum is: %d\n",sum);

}
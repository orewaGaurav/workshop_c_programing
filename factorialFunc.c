#include <stdio.h>
int fact(int);//function declare
int main(){
    int n;
    int x;
    printf("Enter the n: ");
    scanf("%d",&n);
    x = fact(n);//function call
    printf("Factorial is: %d\n",x);

}
int fact(int n){
    int f = 1;
    for (int i = 1;i<=n;i++){
        f *= i;
    }
    return f;

}

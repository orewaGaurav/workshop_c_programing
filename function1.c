#include <stdio.h>
int sum(int,int);//function declare
int main(){
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);

    c = sum(a,b);//function calling
    printf("sum = %d\n",c);

}
int sum(int x,int y){ //function Defination
    int z;
    z = x+y;
    return z;//it returns value in terms of z
}

#include <stdio.h>
#include <math.h>
int main(){
    int n,len = 0,arm=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        len +=1;
    }
    for(int j=n;j>0;j=j/10){
        int d = j%10;
        int a = pow(d,len);
        arm = arm+a;
    }
    if(arm==n){
        printf("Armstrong!\n");
    }
    else
    printf("Not Armstrong!\n");
}
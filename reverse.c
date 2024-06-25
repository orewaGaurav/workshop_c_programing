#include <stdio.h>
int main(){
    int n;
    int d;
    int rev = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        d = n%10;
        n = n/10;
        rev = rev *10+d;
        
    }
    printf("%d\n",rev);
}
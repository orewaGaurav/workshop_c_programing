#include <stdio.h>
int main(){
    int n;
    printf("Enter the number to check repetiation: ");
    scanf("%d",&n);
    int seen[10]={0};
    while(n>0){
        int rem = n%10;
        if (seen[rem]==1){
            break;
        }
        seen[rem]=1;
        n = n/10;
    }
    if (n>0){
        printf("yes\n");
    }
    else if(n==0){
        printf("No\n");
    }
    else{
        printf("No");
    }
}
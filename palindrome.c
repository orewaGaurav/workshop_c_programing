#include <stdio.h>
int main(){
    int n;
    int rev = 0;
    printf("Enter the n: ");
    scanf("%d",&n);
    int s =n;
    for(int i = n;i>0;i =i/10){
        int d = n%10;
        n = n/10;
        rev = rev *10+d;
    }
    printf("%d\n",rev);
    if(s ==rev ){
        printf("Palindrome!\n");
    }
    else
    printf("Not a palindrome\n");
}
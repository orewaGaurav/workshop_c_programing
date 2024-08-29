#include <stdio.h>
int main(){
    int n,t1 = 0,t2 =1;
    int next = t1+t2;
    printf("Enter the no. upto which:- ");
    scanf("%d",&n);
    printf("The fibonacci seies is : %d, %d, ",t1,t2);
    for(int i = 3;i<=n;i++){
        printf("%d, ",next);
        t1 = t2;
        t2 = next;
        next = t1+t2;
    }

}

// // using recursion 
// #include <stdio.h>
// int fibo(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }
// int main(){
//     int n,i;
//     printf("Enter the no. of term: ");
//     scanf("%d",&n);
//     printf("fibonacci series: ");
//     for(i=0;i<n;i++){
//         printf("%d ",fibo(i));
//     }
// }
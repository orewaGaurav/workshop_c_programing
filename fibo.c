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

// #include <stdio.h>
// int main(){
//     int n;
//     int t1 = 0;
//     int t2 = 1;
//     int next_term = t1+t2;
//     printf("Enter the n:- ");
//     scanf("%d",&n);
//     printf("Fibo series %d ,%d, ",t1,t2);
//     for(int i=0;i<=n;i++){
//         printf("%d, ",next_term);
//         t1 = t2;
//         t2=next_term;
//         next_term = t1+t2;
        
//     }
    
// }
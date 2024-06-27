#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

// #include <stdio.h>
// int fibo(int);
// int main(){
//     int n;
//     printf("Enter the n: ");
//     scanf("%d",&n);
//     printf("The fibonacci series: %d\n",fibo(n));
// }
// int fibo(int n){
//     if(n == 1){
//         return 0;
//     }
//     else if (n == 2){
//         return 1;
//     }
//     else{
//         for(int i =1;i<n;i++){
//             int z = fibo(i-1)+fibo(i-2);
//             return z;

//         }
//     }


// }
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[n];
    for(int i = 0;i<n;i++){
        scanf("%c",&arr[i]);
    }
    for(int i = n-1;i>=0;i--){
        printf("%c",arr[i]);
    }
}

// #include <stdio.h>
// int main(){
//     char arr[6]={'g','a','u','r','a','v'};
//     for(int i =5;i>=0;i--){
//         printf("%s",arr);
//     }
//     printf("\n");
// }
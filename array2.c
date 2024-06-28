// WAP to reverse a array
#include <stdio.h>
int main(){
    int a[50],n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for (int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    int j;
    for(int i =0,j= n-1;i<j;i++,j--){
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    printf("Reversed array: ");
    for(int i =0;i<=n-1;i++){
        printf("%d\n",a[i]);
    }
}

//WAP to find the greatest and the smallest of the array

// #include <stdio.h>
// int main(){
//     int n, a[n];
//     printf("Enter the size of array : ");
//     scanf("%d",&n);
//     printf("Enter the elements in array: ");
    // for (int i =0;i<n;i++){
    //     scanf("%d",&a[i]);
    // }
    // int max =a[0], min = a[0];
    // for (int i = 0;i<n;i++){
    //     if(a[i]<min){
    //         min = a[i];
    //         int s = i;
    //     }

    // }
    // printf("Largest: %d\n",max);
    // printf("Smallest: %d\n",min);
    // return 0;
// }

#include <stdio.h>
int main(){
    int n,i;
    printf("Enter the no. of elements: \n");
    scanf("%d",&n);
    int arr[n],output[n];
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1];
    for(i=0;i<max+1;i++){
        count[i]=0;
    }
    for(i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(i=1;i<max+1;i++){
        count[i] += count[i-1];
    }
    for(i=n-1;i>=0;i--){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for(i=0;i<n;i++){
        arr[i] = output[i];
    }
    for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }

}
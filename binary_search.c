#include <stdio.h>
int main(){
    int n,x;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d",&x);
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(i<n-1){
            printf("%d ",arr[i]);
        }
        else{
            printf("%d",arr[i]);
        }
    }
    int j=n-1,mid,count = 0,index,position;
    i=0;
    while(i<=j){
        mid = (i+j)/2;
        if(arr[mid]==x){
            count = 1;
            index = mid;
            position = mid +1;
            break;
        }
        if(arr[mid]>x){
            j =mid-1; 
        }
        if(arr[mid]<x){
            i = mid +1;
        }
    }
    printf("\n");
    if(count == 1){
        printf("Found at %d",index);
    }
    else{
        printf("Not Found");
    }

}
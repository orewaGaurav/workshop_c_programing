#include <stdio.h>
void bubble(int arr[],int n);

int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble(arr,n);
}

void bubble(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            else{
                continue;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}

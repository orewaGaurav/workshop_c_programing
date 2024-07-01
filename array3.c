#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int sumeven = 0;
    int sumodd = 0;
    int counteven =0;
    int countodd = 0;
    int a[n];
    printf("Enter the elements of array: \n");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        if(a[i]%2==0){
            printf("%d Even \n",a[i]);
            counteven +=1;
            sumeven +=a[i];
        }
        else
        printf("%d odd\n",a[i]);
        countodd+=1;
        sumodd += a[i];
    }
    printf("The array is; ");
    for (int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("%d are even numbers\n",counteven);
    printf("%d are odd numbers\n",countodd);
    printf("%d sum of evennum\n",sumeven);
    printf("%d sum of odd numbers\n",sumodd);

}
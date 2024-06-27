#include <stdio.h>
void swap(int *,int *);
int main(){
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swaping: %d %d\n",a,b);



}
void swap(int *x,int *y){
    printf("Actual Argunment = %d %d\n",*x,*y);
    int z;
    z = *x;
    *x = *y;
    *y = z;
    
}

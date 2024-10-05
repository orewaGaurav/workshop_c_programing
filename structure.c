#include <stdio.h>
struct structure1{
    int roll;
    char name[20];
    float marks;
}strVar;
int main(){
    printf("Enter the roll: ");
    scanf("%d",&strVar.roll);
    printf("Enter the marks: ");
    scanf("%f",&strVar.marks);
    printf("Roll: %d\n",strVar.roll);
    printf("marks: %.2f\n",strVar.marks);
}

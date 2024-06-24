#include <stdio.h>
int main(){
    float r,a;
    printf("Enter the radius: ");
    scanf("%f",&r);
    a = 3.14*r*r;
    printf("The area of circle: %.2f\n",a);
}
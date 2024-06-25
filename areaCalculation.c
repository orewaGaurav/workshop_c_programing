#include <stdio.h>
#define pi 3.14
int main(){
    int n;
    int l,b;
    int s;
    int r;
    int ba,h;
    
    printf("1.Rectangle\n");
    printf("2.Square\n");
    printf("3.Circle\n");
    printf("4.Triangle\n");
    printf("Enter Choice: ");
    scanf("%d",&n);
    //fflush(stdin);
    switch(n){
        case 1:
        printf("Enter the length and breadth:");
        scanf("%d%d",&l,&b);
        printf("Area of rectangle: %d",l*b);
        break;
        case 2:
        printf("Enter the side: ");
        scanf("%d",&s);
        printf("Area of the square: %d\n",s*s);
        break;
        case 3:
        printf("Enter the radius: ");
        scanf("%d",&r);
        printf("Area of the circle: %.2f\n",pi*r*r);
        break;
        case 4:
        printf("Enter the base and height: ");
        scanf("%d%d",&ba,&h);
        printf("Area of the triangle: %f\n",0.5*ba*h);
        break;
        
    }
}




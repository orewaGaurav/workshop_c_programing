// #include <stdio.h>
// int main(){
//     int a[10],i;
//     for (i = 0;i<10;i++){
//         printf("Enter the number: ");
//         scanf("%d",&a[i]);
//     }
//     printf("Elements of the array are: ");
//     for (i=0;i<10;i++){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a[10],i,even = 0,odd=0;
//     for(i=0;i<10;i++){
//         printf("Enter the number: ");
//         scanf("%d",&a[i]);
//     }
//     for (i = 0;i<10;i++){
//         if(a[i]%2 == 0){
//             even++;
//         }
//         else
//         odd++;
//     }
//     printf("Total Even number = %d\n",even);
//     printf("Total odd number = %d\n",odd);
//     return 0;   
// }


#include <stdio.h>
int main(){
    int a[10],i,even = 0,odd=0,prod =1;
    int evensum = 0 ,oddsum =0;
    for(i=0;i<10;i++){
        printf("Enter the number: ");
        scanf("%d",&a[i]);
    }
    for (i = 0;i<10;i++){
        if(a[i]%2 == 0){
            even++;
            evensum +=a[i];
        }
        else
        odd++;
        oddsum +=a[i];
    }
    printf("Total Even number = %d\n",even);
    printf("Total odd number = %d\n",odd);
    printf("Sum of Even: %d\n",evensum);
    printf("Sum of odd: %d\n",oddsum);

    return 0;
}


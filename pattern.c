// #include <stdio.h>
// // #include <conio.h>
// int main(){
//     int i,j;
//     for(i = 1;i<=5;i++){
//         for(j = 1;j<=5;j++){
//             printf("*");
//         }
//     printf("\n");
//     }
// }


// #include <stdio.h>
// // #include <conio.h>
// int main(){
//     int i,j;
//     for(i = 1;i<=5;i++){
//         for(j = 1;j<=5;j++){
//             printf("%d",i);
//         }
//     printf("\n");
//     }
// }


// #include <stdio.h>
// // #include <conio.h>
// int main(){
//     int i,j;
//     for(i = 1;i<=5;i++){
//         for(j = 1;j<=5;j++){
//             printf("%d",i);
//             i++;
//         }
//     printf("\n");
//     }
// }

// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i = 1;i<=5;i++){
//         for(j = 1;j<=5;j++){
//             printf("%c",(char)(i+64));
//         }
//     printf("\n");
//     }
// }

// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i = 1;i<=5;i++){
//         for(j = 1;j<=i;j++){
//             printf("🐬");
//         }
//     printf("\n");
//     }
// }

#include <stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        for (int j = 1;j<=6-i;j++){
            printf(" ");   
        }
        for (int k = 1;k<=i;k++){
            printf("* ");//space matters
        }
        printf("\n");
    }
}


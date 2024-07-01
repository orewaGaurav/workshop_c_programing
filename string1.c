// #include <stdio.h>
// int main(){
//     char a[20] = "Gaurav Kumar";
//     printf("%s",a);
// }

#include <stdio.h>
int main(){
    char a[50];
    printf("Enter your name: ");
    // scanf("%s",&a);
    gets(a);
    // printf("Your name is: %s\n",a);
    puts(a);
    return 0;
}
// strlen()
// strcmp()
// strcpy()
// strcat()
// strrev()

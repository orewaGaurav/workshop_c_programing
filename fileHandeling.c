// #include <stdio.h>
// int main(){
//     // 1
//     // FILE *fp;
//     // fp = fopen("abc.txt","w");
//     // fputs("HLW GAURAV",fp);
//     // fclose(fp);

//     // 2
//     FILE *fp;
//     fp = fopen("abc2.txt","a");
//     fputs("and we are here!",fp);
//     printf("File Ok\n");
//     fclose(fp);

// }


#include <stdio.h>
int main(){
    FILE *ptr;
    int roll;
    float marks;
    char name[50];
    ptr = fopen("File_han.txt","w");
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter roll no: ");
    scanf("%d",&roll);
    printf("Enter Marks: ");
    scanf("%f",&marks);
    fprintf(ptr,"Name: %s\nRoll = %d\nMarks: %.2f\n",name,roll,marks);
    fclose(ptr);
}
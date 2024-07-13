//copy the content of one file into another file
//merge the data of two files 

//1

// #include<stdio.h>

// int main(){
//     FILE *f1;
//     FILE *f2;
//     char name[20];
//     int c = 0;

// f1 = fopen("day10.txt","w");
// f2 = fopen("abc2.txt","r");
// while (fgets(name,sizeof(name),f2)!=NULL){
//     printf("%s",name);
//     fputs(name,f1);
//     c =c+1;
// }
// fclose(f1);
// fclose(f2);
// }

#include <stdio.h>
int main(){
    FILE *f1;
    FILE *f2;
    char name[50];
    f1 = fopen("dayFile.txt","w");
    f2 = fopen("abc.txt","r");
    while (fgets(name,sizeof(name),f2)!=NULL){
        printf("%s",name);
        fputs(name,f1);
    }
    fclose(f1);
    fclose(f2);
}




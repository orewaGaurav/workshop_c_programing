// #include <stdio.h>
// #include <string.h>
// struct Student{
//     int roll;
//     float marks;
//     char name[50];
// };
// int main(){
//     struct Student S;
//     S.roll = 10;
//     S.marks = 24.5;
//     strcpy(S.name,"Gaurav Kumar");
//     printf("Roll no: %d\nMarks: %.2f\nName: %s\n",S.roll,S.marks,S.name);
    
//     return 0;
// }



// #include<stdio.h>

// struct student {
// int roll;
// int age;
// char name[20];
// };
// int main(){
//   struct student s[5];
//   int i;
//   for(i=0;i<5;i++){
//     printf("Enter the data of %d student: ", i+1);
//     scanf("%d%d%s", &s[i].roll, &s[i].age, s[i].name);
//   }
//   for(i=0;i<5;i++){
//     printf("\nThe data of %d student is:\n", i+1);
//     printf("Roll No:%d\nAge:%d\nName:%s", s[i].roll,s[i].age,s[i].name);
//   }
// }


// #include <stdio.h>
// union student{
//   int roll;
//   float marks;
//   char name[50];

// };
// int main(){
//   union student s1;
//   printf("%ld\n",sizeof(s1.roll));
//   printf("%ld\n",sizeof(s1.marks));
//   printf("%ld\n",sizeof(s1.name));
//   printf("%lu\n",sizeof(s1));
// }


#include <stdio.h>
struct student{
  int roll;
  float marks;
  char name[50];

};
int main(){
  struct student s1;
  printf("%ld\n",sizeof(s1.roll));
  printf("%ld\n",sizeof(s1.marks));
  printf("%ld\n",sizeof(s1.name));
  printf("%lu\n",sizeof(s1));
}
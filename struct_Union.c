// #include <stdio.h>
// struct Book{
//     char name[50];
//     float price;
//     int num;
// };
// int main(){
//     struct Book s1;
//     printf("Enter the name of the book: ");
//     scanf("%s",&s1.name);
//     printf("Enter the price of the book: ");
//     scanf("%f",&s1.price);
//     printf("Enter the num of pages: ");
//     scanf("%d",&s1.num);
//     printf("Name:%s\nPrice: %f\nNum: %d\n",s1.name,s1.price,s1.num);
// }

// #include <stdio.h>
// struct student{
//     char name[50];
//     char ERP[20];
//     char branch[20];
//     int semester;
// };
// int main(void){
//     struct student s1;
//     printf("Enter Name: ");
//     scanf("%s",s1.name);
//     printf("Enter ERP: ");
//     scanf("%s",s1.ERP);
//     printf("Enter branch: ");
//     scanf("%s",s1.branch);
//     printf("Enter Semester: ");
//     scanf("%d",&s1.semester);

//     printf("Name: %s\n",s1.name);
//     printf("ERP: %s\n",s1.ERP);
//     printf("Branch: %s\n",s1.branch);
//     printf("Semester: %d\n",s1.semester);

// }



#include <stdio.h>
union student{
    char *name[50];
    char *erp[50];
    int roll;
    char *branch[5];
};
struct stu{
    int marks;
    union student s;
};
int main() {
    struct stu s1;
    printf("Enter your name : ");
    scanf("%s",s1.s.name);
    printf("Enter your branch : ");
    scanf("%s",s1.s.branch);
    printf("Enter your erp : ");
    scanf("%s",s1.s.erp);
    printf("Enter your roll number : ");
    scanf("%d",&s1.s.roll);
    printf("Enter your marks : ");
    scanf("%d",&s1.marks);
    
    printf("Enter your name : %s\n",s1.s.name);
    printf("Enter your branch : %s\n",s1.s.branch);
    printf("Enter your erp : %s\n",s1.s.erp);
    printf("Enter your roll number : %d\n",s1.s.roll);
    printf("Enter your marks : %d\n",s1.marks);
    return 0;

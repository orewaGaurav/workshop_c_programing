#include <stdio.h>
void ToH(int n,char source,char dest,char aux);
int main(){
    int n;
    printf("Enter the no. of disk: ");
    scanf("%d",&n);
    ToH(n,'A','C','B');
    return 0;
}
void ToH(int n,char source,char dest,char aux){
    if (n == 1)
    {
        printf("Move Disk 1 from %c to %c\n",source,dest);
        return ;

    }
    ToH(n-1,source,aux,dest);
    printf("Move disk %d from %c to %c\n",n,source,dest);
    ToH(n-1,aux,dest,source);

}
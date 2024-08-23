#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no. of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter the elements of matrix: ");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int z=0,nz=0;
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]!=0){
                nz++;
            }
            else{
                z++;
            }
        }
    }
    if(nz>z){
        printf("Its not a sparse matrix:- ");
    }
    else{
        int sprs[nz][3],k=0;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(arr[i][j]!=0){
                    sprs[k][0]=i;
                    sprs[k][1]=j;
                    sprs[k][2]=arr[i][j];
                    k++;
                }
            }
        }
        printf("Representation of sparse matrix: \n");
        for(i=0;i<nz;i++){
            for(j=0;j<3;j++){
                printf("%d ",sprs[i][j]);
            }
            printf("\n");
        }
    }
}
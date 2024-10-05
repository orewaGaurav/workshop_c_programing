#include <stdio.h>
int main(){
    int r,c,i,j,zero=0,non_zero = 0;
    printf("Enter row column of the matrix: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]==0)
            zero++;
            else
            non_zero++;
        }
    }
    if(non_zero == 0)
    printf("-1\n");
    else if (zero>non_zero){
        int k = 0;
        int spars[non_zero][3];
        for (i = 0;i<r;i++){
            for(j=0;j<c;j++){
                if(arr[i][j]!=0){
                    spars[k][0] = i;
                    spars[k][1] = j;
                    spars[k][2] = arr[i][j];
                    k++;
                }
            }
        }
        for(i=0;i<non_zero;i++){
            for(j=0;j<3;j++){
                printf("%d ",spars[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("-1\n");
}
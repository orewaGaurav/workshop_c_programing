#include <stdio.h>
int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      for(int i=1;i<=n;i++){
          for(int j=n;j>n-i;j--){
              printf("%d ",j);
          }
          for(int j=(n-i+1),k=1;k<j;k++){
            printf("%d ",n-i+1);
          }
          for(int j=(n-i-1);j>=1;j--){
            printf("%d ",n-i+1);
          }
          for(int j=(n-i+1);j<=n;j++){
            if(j==1 && i==n) {
                continue;
            }
            else{
            printf("%d ",j);
            }
          }
          printf("\n");
          
      }
      for(int i=1;i<n;i++){
          for(int k=n;k>i;k--){
              printf("%d ",k);
          }
          for(int j=1;j<i+1;j++ ){
            printf("%d ",i+1);
          }
          for(int j=2;j<=i;j++){
            printf("%d ",i+1);
          }
          for(int j=i+1;j<=n;j++){
            printf("%d ",j);
          }
          printf("\n");
          
      }
      

    return 0;
}
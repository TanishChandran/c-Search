#include<stdio.h>
int main(){
    int i,j,m,n,a=0,sum=0;
    printf("Enter m and n:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    if(m==n){
        printf("Enter the matrix elements:");
        for(i=0;i,m;++i){
            for(j=0;j<n;++j){
                scanf("%d",&arr[i][j]);
                for(i=0;i<m;++i){
                    sum=sum+arr[i][j];
                    a=a+arr[i][m-i-1];
                    printf("main diagonal: %d",sum);
                    printf("Off diagonal: %d\n",a);
                }
                else
                printf("Not square matrix\n");
                return 0;
            }
        }
    }
}
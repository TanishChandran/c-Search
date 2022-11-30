#include<stdio.h>
int main(){
    int i,rows,k=1;
    printf("Rows:");
    scanf("%d",&rows);
    int arr[30];
    for(i=0;i<rows;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=rows;i+=2){
        if(k%2==1){
            printf("%d %d",arr[i],arr[i+1]);
            k++;
        }
        else{
        printf("%d %d",arr[i+1],arr[i]);
        k++;}
        printf("\n");
    }
    return 0;
}
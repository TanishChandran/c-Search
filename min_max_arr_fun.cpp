#include<stdio.h>
int sum_of_arr(int arr[],int n){
    int min,max;
    min=max=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i])
        min=arr[i];
        if(max<arr[i])
        max=arr[i];
    }
    printf("Max is :%d\nMin is:%d",max,min);
    return 0;
    }
int main(){
    int n,max,min;
    printf("\nEnter the number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    sum_of_arr(arr,n);
    return 0;
}
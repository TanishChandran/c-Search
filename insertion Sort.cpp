#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n],i,j,temp;
    
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        if(arr[j]>arr[i]){
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    for(i=0;i<n;i++)
    cout<<arr[i];
    
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"No of Elements: \n";
    cin>>n;
    int arr[n],i,j,temp;
    cout<<"Elements: \n";
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(arr[j]>temp && j>=0){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }

    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}
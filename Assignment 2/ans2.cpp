#include<iostream>
using namespace std;
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"the sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
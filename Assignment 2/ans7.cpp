#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,6,5,7};
    int n=7,inv=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                inv++;
            }
        }
    }
    cout<<"Number of inversions are: "<<inv;
}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements to be entered in array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=false;
            }
        }
        if(flag){
            count++;
        }
    }
    cout<<"Number of distinct elements are "<<count<<endl;
    return 0;
}
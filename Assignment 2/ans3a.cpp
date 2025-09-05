#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5};
    int n=5;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=i+1){
            cout<<"Missing number = "<<i+1<<endl;
        }
    }
    return 0;
}
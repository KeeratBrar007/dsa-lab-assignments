#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows of the array:"<<endl;
    cin>>row;
    cout<<"Enter the number of coloumns of the array:"<<endl;
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<"Enter the value for row: "<<i+1<<" and coloumn: "<<j+1<<endl;
        cin>>arr[i][j];
        }
    }
    cout<<"Matrix is : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix is : "<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<"\t";
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int row1,col1;
    cout<<"Enter the number of rows of the Matrix A :"<<endl;
    cin>>row1;
    cout<<"Enter the number of coloumns of the Matrix A :"<<endl;
    cin>>col1;
    int row2,col2;
    cout<<"Enter the number of rows of the Matrix B :"<<endl;
    cin>>row2;
    cout<<"Enter the number of coloumns of the Matrix B :"<<endl;
    cin>>col2;
    if(col1!=row2){
        cout<<"Matrix Multiplication cannot happen"<<endl;
        return 0;
    }
    cout<<"Enter values for Matrix A : "<<endl;
    int arr1[row1][col1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
        cout<<"Enter the value for row: "<<i+1<<" and coloumn: "<<j+1<<endl;
        cin>>arr1[i][j];
        }
    }
    cout<<"Enter values for Matrix B : "<<endl;
    int arr2[row2][col2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
        cout<<"Enter the value for row: "<<i+1<<" and coloumn: "<<j+1<<endl;
        cin>>arr2[i][j];
        }
    }
    int arr[row1][col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            arr[i][j]=0;
            for(int k=0;k<col1;k++){
                arr[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"Matrix A is : "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Matrix B is : "<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Matrix A X B is : "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
} 
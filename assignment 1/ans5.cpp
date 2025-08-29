#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of coloumns: ";
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter value for row "<<i+1<<" and coloumn "<<j+1<<" ";
            cin>>arr[i][j];
        }
    }
    cout << "\nSum of each row: ";
    for(int i = 0; i < row; i++) {
        int rowSum = 0;
        for (int j = 0; j < col; j++) {
            rowSum += arr[i][j];}
        cout<<"\nRow " << i + 1 << ": " <<rowSum;
    }
    cout << "\nSum of each column: ";
    for(int i = 0; i < col; i++) {
        int colSum = 0;
        for (int j = 0; j < row; j++) {
            colSum += arr[j][i];
        }
        cout<< "\nColumn "<< i + 1<< ": " <<colSum;
    }
}
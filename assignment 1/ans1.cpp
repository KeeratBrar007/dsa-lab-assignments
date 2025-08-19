#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int insert(int arr[],int n,int pos,int val){
    n+=1;
    for(int i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    return n;
}
int deletee(int arr[],int n,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            cout<<"Element deleted"<<endl;
            return n-1;
        }
    }
    cout<<"Element not found"<<endl;
    return n;
}
void linear_search(int arr[],int n,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<"Element found at position: "<<i+1<<endl;
            return;
        }
    }
    cout<<"Element not found"<<endl;
}
int main(){
    cout<<"Enter 1 to display the array"<<endl;
    cout<<"Enter 2 to insert an element in the array"<<endl;
    cout<<"Enter 3 to delete an element from the array"<<endl;
    cout<<"Enter 4 to search an element in the array"<<endl;
    cout<<"Enter 5 to exit"<<endl;
    int ch;
    int n;
    cout<<"Enter the number of elements to be stored in the array:\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    while(true){
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                display(arr,n);
                break;
            case 2:
                int elem,pos;
                cout<<"Enter positon: "<<endl;
                cin>>pos;
                cout<<"Enter value: "<<endl;
                cin>>elem;
                if(pos<1 || pos>n+1){
                    cout<<"Enter valid position"<<endl;
                    break;
                }
                n=insert(arr,n,pos,elem);
                break;
            case 3:
                int ele;
                cout<<"Enter element to be deleted: "<<endl;
                cin>>ele;
                n=deletee(arr,n,ele);
                break;
            case 4:
                int val;
                cout<<"Enter element to be searched: "<<endl;
                cin>>val;
                linear_search(arr,n,val);
                break;
            case 5:
                cout<<"Exiting"<<endl;
                return 0;
            default:
                cout<<"Enter valid choice"<<endl;
                break;
        }
    }
}
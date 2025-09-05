#include<iostream>
using namespace std;
int binarysearch(int arr[],int target,int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else if(arr[mid]>target){
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=6;
    int index=binarysearch(arr,target,size);
    cout<<"the element has been found at the index:"<<index;
}
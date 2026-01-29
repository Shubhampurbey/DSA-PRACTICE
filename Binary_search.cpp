#include<iostream>
using namespace std;

int binarysearch(int n,int arr[],int left,int right,int target){
    if(left>right){
        return -1;
    }
    int mid=left+(right-left)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        return binarysearch(n,arr,left,mid-1,target);
    }
    else{
        return binarysearch(n,arr,mid+1,right,target);
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"target: ";
    cin>>target;

    int result=binarysearch(n,arr,0,n-1,target);
    if(result!=-1){
        cout<<"element fount at index: "<<result<<endl;
    }
    else{
        cout<<"Element not found."<<endl;
    }
}

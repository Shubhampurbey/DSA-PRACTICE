#include<iostream>
using namespace std;

void selectionsort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

void printArr(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(n,arr);
    printArr(n,arr);
}
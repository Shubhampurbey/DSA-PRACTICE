#include<iostream>
using namespace std;

void insertionsort(int n,int arr[]){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>-1 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void printarrray(int n,int arr[]){
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

    insertionsort(n,arr);
    printarrray(n,arr);
}
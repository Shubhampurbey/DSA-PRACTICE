#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"z"<<" ";
    //     }
    //     cout<<endl;
    // }
    
    int i=1;
    while(i<=5){
        int j=1;
        while(j<=i){
            cout<<"z"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=5;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;
    if(a|b){
        cout<<a<<" "<<b<<endl;
    }
    if(a&b){
        cout<<a<<" "<<b;
    }
    if(a>10 && b>5){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false";
    }
    cout<<endl;
    cout<<(a>>2)<<endl;
    cout<<(b<<3)<<endl;
    if(a==b){
        cout<<"true";
    }
    cout<<endl;
}
#include<iostream>
using namespace std;
int main(){
     int a,b;
    cout<<"enter the no. you want to check:";
    cin>>a;
    if(a>0 && (a&a-1)==0){
        cout<<"power of 2\n";
    }
    else{
        cout<<"not a power of 2\n";
}
}
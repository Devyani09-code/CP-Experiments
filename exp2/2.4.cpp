#include<iostream>
using namespace std;
int main(){
     int a,b;
    cout<<"enter the no. you want to check:";
    cin>>a;
    if(a>0 && (a&1)==0){
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
}
}
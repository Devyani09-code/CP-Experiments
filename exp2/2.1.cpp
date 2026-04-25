#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the no. you want to check and the position:";
    cin>>a>>b;
    if(a&(1<<b)!=0){
        cout<<"bit is set\n";
    }
    else{
        cout<<"bit is unset\n";
    }
}
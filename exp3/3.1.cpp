#include<iostream>
using namespace std;
int num(int a){
    if(a<=0){
        return -1;
    }

    cout<<a<<" ";
    return num(a-1);
}
int main(){
    int n;
    cout<<"enter your num:";
    cin>>n;
    cout<<"num to 1:"<<num(n)<<"\n";
}
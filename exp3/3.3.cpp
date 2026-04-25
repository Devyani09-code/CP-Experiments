#include<iostream>
using namespace std;
int num(int a,int b){
    if(a==0 || b==0){
        return 1;
    }

    return a*num(a,b-1);
}
int main(){
    int n,m;
    cout<<"enter your num and power:";
    cin>>n>>m;
    cout<<"num:"<<num(n,m)<<"\n";
}
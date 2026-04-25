#include<iostream>
using namespace std;
int num(int a){
    if(a==0){
        return 0;
    }
     int sum=0;
     sum=sum+(a%10);
    return sum+num(a/10);
}
int main(){
    int n;
    cout<<"enter your num:";
    cin>>n;
    cout<<"sum:"<<num(n)<<"\n";
}
#include<iostream>
using namespace std;
int main(){
    int a[5],i,s_l,l;
    cout<<"Enter 5 numbers: ";
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    s_l=a[0];
    l=a[0];
    for(i=1;i<5;i++){
        if(a[i]>l){
            l=a[i];
        }
    }
    for(i=1;i<5;i++){
        if(a[i]>s_l && a[i]!=l){
            s_l=a[i];
        }
    }
    cout<<"Largest number is: "<<l<<endl;
    cout<<"Second largest number is: "<<s_l<<endl;
}
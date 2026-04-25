#include<iostream>
using namespace std;
int main(){
    int a[5],i,max=0;
    cout<<"enter an array(5 elements):";
    for(i=0;i<5;i++){
cin>>a[i];
    }
    max=a[0]&a[1];
     for(i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        int c=a[i]&a[i+1];
        if(c>max){
            max=c;
        }
    }
     }

     cout<<"max AND value:"<<max<<"\n";
}
#include<iostream>
using namespace std;
int main(){
    int a[5],i,result=0,n;
    cout<<"enter an array(5 elements):";
    for(i=0;i<5;i++){
cin>>a[i];
    }
   
     for(i=0;i<5;i++){
       result=result^a[i];

    }
      cout<<"odd occurences:"<<result<<"\n";

     }

   
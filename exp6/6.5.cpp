#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,8,8,8,10},key,i,f=0,m;
    cout<<"enter key:";
    cin>>key;
    for(i=0;i<10;i++){
        if(a[i]==key){
         f=f+1;  
         m=i;
        }
    }

if(f==0){
    cout<<"key not found";
}
else{
    cout<<"last occurence at:"<<m;
}
}
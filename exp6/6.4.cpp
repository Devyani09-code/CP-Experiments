#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10},key,i;
    cout<<"enter key:";
    cin>>key;
    for(i=0;i<10;i++){
        if(a[i]==key){
            cout<<"first occurence at:"<<i;
            break;
        }
    }
}
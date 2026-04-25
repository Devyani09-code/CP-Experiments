#include<iostream>
using namespace std;
bool asc(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1])
            return false;
    }
    return true;
}
bool desc(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1])
            return false;
    }
    return true;
}
int main(){
    int a[5],i;
    cout<<"Enter 5 numbers: ";
    for(i=0;i<5;i++){
        cin>>a[i];
    }

    if(asc(a,5)){
        cout<<"The numbers are in ascending order."<<endl;
    }
    else if(desc(a,5)){
        cout<<"The numbers are in descending order."<<endl;
    }
    else{
        cout<<"The numbers are not in order."<<endl;
    }
}
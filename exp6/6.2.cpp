#include<iostream>
using namespace std;
int search(int a[], int h,int l, int key) {
    int mid = (h + l) / 2;
    if(h<l){
        return -1;
    }
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
        return search(a,mid-1,l,key);
    }
    else {
        return search(a,h,mid+1,key);
    }
}
int main(){
    int a[5],n,key,i;
    cout<<"Enter 5 elements of an array in asc order:";
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"enter key:";
    cin>>key;
    n=search(a,4,0,key);
    if(n==-1){
        cout<<"key not found";
    }
    else{
        cout<<"key found at:"<<n;
    }
}
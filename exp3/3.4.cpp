#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void perm(string s,int l,int r, vector<string>& a){
   if(r==l){
    return;
   }
   for(int i=l;i<r;i++){
    swap(s[l],s[r]);
    perm(s,l+1,r,a);
   }
}
int main(){
    string sent;
    vector<string>arr;
    cout<<"enter string:";
    cin>>sent;
    perm(sent,0,sent.size()-1,arr);
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }
}
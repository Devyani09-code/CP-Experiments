#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[7],i,j;
    vector <int> v;
    cout<<"enter 7 elements:";
    for(i=0;i<7;i++){
        cin>>a[i];
    }
 
    for(i=0;i<7;i++){
        if(a[i] != 0){
            v.push_back(a[i]);
        }
    }
    for(i=0;i<7;i++){
        if(a[i] == 0){
            v.push_back(a[i]);
        }
    }
    
    cout<<"updated array:";
    for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<"\n";
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    cout<<"enter 5 elements:\n";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
}
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-i-1;j++){
        if(v[i]<v[j]){
            swap(v[i],v[j]);
            v.push_back(v[i]);
        }
    }
    }
    cout<<"sorted elements using bubble sort:\n";
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

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
    sort(v.begin(), v.end());
    cout<<"sorted elements:\n";
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

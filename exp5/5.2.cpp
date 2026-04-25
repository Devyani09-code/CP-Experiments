//linear probing
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[10],n,hash_size,i;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter the size of the hash table:";
    cin>>hash_size;
    vector<vector<int>> hash_table(hash_size);

    cout<<"enter the elements of the array:";
for(i=0;i<n;i++){
  cin>>a[i];
    int hash_index=a[i]%hash_size;
   
    while(!hash_table[hash_index].empty()){
        hash_index=(hash_index+1)%hash_size;
    }
    hash_table[hash_index].push_back(a[i]);
}
for(i=0;i<hash_size;i++){
    cout<<"hash index "<<i<<":";
    for(int j=0;j<hash_table[i].size();j++){
        cout<<hash_table[i][j]<<" ";
    }
    cout<<endl;
}
}
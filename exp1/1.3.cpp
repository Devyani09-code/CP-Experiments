#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int>a;
  int l;
  cout<<"enter limit of series:";
  cin>>l;
 a.push_back(0);
 a.push_back(1);
  
  for(int i=0;i<l;i++){
   int x =a[i]+a[i+1];
    a.push_back(x);
  }

  cout<<"fibonnacci series:";
   for(int i=0;i<l;i++){
    cout<<a[i];
   }
}
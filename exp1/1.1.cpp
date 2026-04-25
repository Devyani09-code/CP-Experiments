#include<iostream>
#include<sstream>
using namespace std;
int main(){
 string sent,word;
 int count=0;
 cout<<"enter a sentence:";
 getline(cin,sent);
 stringstream ss(word);
    while(ss>>word){
      count++;
    }
    cout<<"no. of words are:"<<count;
}
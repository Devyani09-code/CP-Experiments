#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string sent;
    cout<<"enter  a sentence:";
    getline(cin,sent);
    string word;
    string result=" ";
    stringstream ss(sent);
    while(ss>>word){
        if(result==" ")
            result=word;
        else
            result=result+" "+word;
    }
    cout<<result<<endl;
}
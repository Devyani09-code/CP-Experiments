#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string:";
    cin>>str;
    string rev = str;
    reverse(rev.begin(),rev.end());
    if(str==rev){
        cout<<"the string is a palindrome";
    }
    else{
        cout<<"the string is not a palindrome";
    }
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    string srcstring,fstring;
    cout<<"enter the source string:";
cin>>srcstring;
cout<<"enter the string to be found:";
cin>>fstring;
int res=srcstring.find(fstring);
if(res==-1){
    cout<<"the string is not found";
    cout<<"-1";
}
    else{
        cout<<"the string is found";
    }
}
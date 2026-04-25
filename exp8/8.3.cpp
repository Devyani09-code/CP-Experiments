 #include<iostream>
#include<string>
using namespace std;
int main(){
 string str1,str2;
 int count=0;
    cout<<"enter the first string:";
    cin>>str1;
    cout<<"enter the second string:";
    cin>>str2;
    for(int i=0;i<str1.length();i++){
       int j=0;
        while(j<str2.length()){
            if(str1[i]==str2[j]){
                count++;
            }
             j++;
        }
    }

    if(count==str2.length()){
        cout<<"its an anagram";
    }
    else{
        cout<<"its not an anagram";
    }
}
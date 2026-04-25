#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(st.empty()){
                cout<<"NO";
                return 0;
            }
            char top=st.top();
            
            if((s[i]==')' && top!='(') || (s[i]=='}' && top!='{') || (s[i]==']' && top!='[')){
                cout<<"NO";
                return 0;
            }
            st.pop();//removes the matched brackets
        }
    }
    if(!st.empty()){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}
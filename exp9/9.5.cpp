#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="23*54*+9-";
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');//converts char to int
        }
        else{
            int b=st.top(); st.pop();
            int a=st.top(); st.pop();
            if(s[i]=='+') st.push(a+b);
            else if(s[i]=='-') st.push(a-b);
            else if(s[i]=='*') st.push(a*b);
            else if(s[i]=='/') st.push(a/b);
        }
    }
    cout<<st.top()<<endl;
    return 0;

}
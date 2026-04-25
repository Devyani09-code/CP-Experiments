#include<iostream>
using namespace std;

int length(char a[], int i){
    if(a[i]=='\0')
        return 0;

    return 1 + length(a, i+1);
}

int main(){
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    cout<<"length:"<<length(s,0);
}
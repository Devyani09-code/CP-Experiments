#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(0);
    cout<<"Deque elements: ";
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<"Front element: "<<d.front()<<endl;
    cout<<"Back element: "<<d.back()<<endl;
    d.pop_front();
    cout<<"After popping front element: ";
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    return 0;
}
#include<iostream>
using namespace std;
void add(int a[],int &rear,int x){
    if(rear>4){
        cout<<"Queue overflow"<<endl;
    }
    else{
        a[rear++]=x;
    }
}
void drop(int a[],int &front,int &rear){
    if(front>4 || front==-1 || front>rear){
        cout<<"Queue overflow"<<endl;
    }
    else{
        a[front++];
    }
}
int main(){
    int a[5],front=0,rear=0;
    add(a,rear,10);
    add(a,rear,20);
    add(a,rear,30);
    add(a,rear,40);
    add(a,rear,50);
    cout<<"\nfront: "<<a[front]<<endl;
    cout<<"rear: "<<a[rear-1]<<endl;
    drop(a,front,rear);
    drop(a,front,rear);
    
    for(int i=front;i<rear;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nfront: "<<a[front]<<endl;
    cout<<"rear: "<<a[rear-1]<<endl;
    return 0;
}
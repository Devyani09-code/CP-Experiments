#include<iostream>
using namespace std;
int main(){
	int a[5],n,key,i,mid,low,high;
	cout<<"Enter 5 elements of an array in asc order:";
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	low=0;
	high=4;
	mid=(low+high)/2;

     cout<<"enter key:";
     cin>>key;
	while(high>low){
		if(key>a[mid]){
			low=mid;
		}
		else if(key<a[mid]){
			high=mid;
		}
		else{
			key==a[mid];
			n=mid;
			break;
			
		}
	}
	cout<<"key found at:"<<n;
}
#include<iostream>
using namespace std;
int main(){
	int a[5],n,key,i,mid,low,high;
	cout<<"Enter 5 elements of an array:";
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	for(i=0;i<5;i++){
		if(a[i]>=a[i+1] && a[i]>=a[i-1]){
			n=i;
			cout<<"The peak element is "<<a[n]<<endl;
		}
	}
}
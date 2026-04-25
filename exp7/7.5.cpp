#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[]={1,5,2,4,3};
	int i,j;
	
    sort(a,a+ 5);

    cout<<"enter value of k(0 TO 4):";
    cin>>j;
    cout<<"\nkth smallest element is:"<<a[j]<<"\n";

}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int a[]={1,2,2,3,4};
	int b[]={2,2,3,4};
    vector<int> v;
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(a[i]==b[j] && find(v.begin(), v.end(), a[i]) == v.end()){
                v.push_back(a[i]);
                break;
            }
		}
	}
    cout<<"\nintersection:";
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
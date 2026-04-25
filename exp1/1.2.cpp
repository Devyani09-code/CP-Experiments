#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;

    cout<<"enter a matrix(3x3):";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
cout<<"\nmatrix is:\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\ntranspose of your matrix is:\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
}
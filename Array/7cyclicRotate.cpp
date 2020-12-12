#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int last=A[n-1];
    for(int i=n-2;i>=0;i--){
        A[i+1]=A[i];
    }
    A[0]=last;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
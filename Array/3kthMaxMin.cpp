#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    sort(A, A+n);
    int k;
    cout<<"Enter k : ";
    cin>>k;
    cout<<"Kth min : "<<A[k-1]<<endl;
    cout<<"kth max : "<<A[n-k]<<endl;
    return 0;
}
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
    int k;
    cin>>k;
    sort(A, A+n);
    cout<<A[k-1]<<A[n-k]<<endl;
    return 0;
}
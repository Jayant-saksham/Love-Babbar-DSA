#include<bits/stdc++.h>
using namespace std;
vector<int> valueEqualtoIndex(int A[], int n){
    vector<int> v;
    for(int i=0;i<n;i++){
        if(A[i]==i+1){
            v.push_back(A[i]);
        }
    }
    return v;
}
int main(){
    int n;
    int A[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    vector<int> v = valueEqualtoIndex(A,n);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
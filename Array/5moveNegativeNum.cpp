#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0,j=0;i<n;i++){
        if(A[i]<0){
            swap(A[i], A[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
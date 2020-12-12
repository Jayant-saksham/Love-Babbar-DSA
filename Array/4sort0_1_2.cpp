#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int zeros=0, ones=0, twos=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            zeros++;
        }
        if(A[i]==1){
            ones++;
        }
        if(A[i]==2){
            twos++;
        }
    }
    int i=0;
    while(zeros--){
        A[i++]=0;
    }
    while(ones--){
        A[i++]=1;
    }
    while(twos--){
        A[i++]=2;
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int countZero=0;
    int countOne=0;
    int countTwo=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            countZero++;
        }
        else if(A[i]==1){
            countOne++;
        }
        else if(A[i]==2){
            countTwo++;
        }
    }
    for(int i=0;i<countZero;i++){
        A[i]=0;
    }
    for(int i=countZero;i<countZero+countOne;i++){
        A[i]=1;
    }
    for(int i=countZero+countOne;i<countOne+countZero+countZero;i++){
        A[i]=2;
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    } 
    int maxSum=0, currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=A[i];
        if(maxSum<currentSum){
            maxSum=currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}
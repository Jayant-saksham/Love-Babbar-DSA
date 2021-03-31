#include<iostream>
using namespace std;
int searching(int A[], int n, int x){
    int low=0;
    int high=n-1;
    int mid = low+(high-low)/2;
    while(low<=high){
        if(A[mid]==x){
            return x;
        }
        else if(A[low]<=A[mid]){
            if(A[mid]>=x && A[low]<=x){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(A[mid]<=x && A[high]>=x){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    int A[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int x;
    cin>>x;
    return 0;
}
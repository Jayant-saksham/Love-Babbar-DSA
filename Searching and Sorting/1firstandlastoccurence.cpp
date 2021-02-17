#include<iostream>
#include<vector>
using namespace std;
int first(int A[], int low, int high, int x, int n){
    if(high>=low){
        int mid=low+(high-low)/2;
        if((mid==0 || x>A[mid-1]) && A[mid]==x){
            return mid;
        }
        else if(x>A[mid]){
            return first(A, mid+1, high, x,n);
        }
        else{
            return first(A,low, mid-1,x,n);
        }
    }
    return -1;
}
int last(int A[], int low, int high, int x, int n){
    if(high>=low){
        int mid=low+(high-low)/2;
        if((mid==n-1 || x<A[mid+1]) && A[mid]==x){
            return mid;
        }
        else if(x<A[mid]){
            return last(A,low,mid-1,x,n);
        }
        else{
            return last(A,mid+1,high,x,n);
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int x;
    cin>>x;
    cout<<first(A,0,n-1,x,n)<<endl;
    cout<<last(A,0,n-1,x,n)<<endl;

    return 0;
}
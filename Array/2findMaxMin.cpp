#include<iostream>
#include<algorithm>
using namespace std;
void maxmin(int A[], int n){
    sort(A, A+n);   
    cout<<"MAX : "<<A[n-1]<<endl;
    cout<<"MIN : "<<A[0]; 
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int min=INT16_MAX;
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(min>A[i]){
            min=A[i];
        }
        if(max<A[i]){
            max=A[i];
        }
    }
    cout<<"MAX : "<<max<<endl;
    cout<<"MIN : "<<min<<endl;
    maxmin(A,n);
    return 0;
}
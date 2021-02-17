#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int max=INT16_MIN;
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
        if(A[i]<min){
            min=A[i];
        }
    }
    cout<<"MAX : "<<max<<endl;
    cout<<"MIN : "<<min<<endl;
    return 0;
}
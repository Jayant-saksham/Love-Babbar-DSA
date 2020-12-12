#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>n;
        s.insert(A[i]);
    }
    int m;
    cin>>m;
    int B[m];
    for(int i=0;i<m;i++){
        cin>>B[i];
        s.insert(B[i]);
    }
    cout<<"UNION : "<<s.size()<<endl;
    return 0;
}
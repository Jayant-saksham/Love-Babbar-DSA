#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    int n;
    int m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<s.size()<<endl;
    return 0;
}
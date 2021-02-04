#include<iostream>
using namespace std;
string countAndSay(int n){
    string ans="";
    if(n==1){
        return "1";
    }
    ans+=countAndSay(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;

    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
void reverse(string s){
    int i=s.size() - 1;
    string rev="";
    while(i>=0){
        rev+=s[i];
        i--;
    }
}
int main(){
    string s;
    cin>>s;
    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}
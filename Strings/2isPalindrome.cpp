#include<iostream>
using namespace std;
bool isPalindrome(string s){
    string rev = "";
    int i=s.size()-1;
    while(i>=0){
        rev+=s[i];
        i--;
    }
    return (rev==s)?true:false;
}
int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s)<<endl;
    return 0;
}
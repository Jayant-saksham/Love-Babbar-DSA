#include<iostream>
using namespace std;
bool areRotation(string a, string b){
    if(a.size()!=b.size()){
        return false;
    }
    string temp=a+a;
    if(temp.find(b)){
        return true;
    }
    return false;
}
int main(){
    string a,b;
    getline(cin, a);
    getline(cin, b);
    cout<<areRotation(a,b)<<endl;
    return 0;
}
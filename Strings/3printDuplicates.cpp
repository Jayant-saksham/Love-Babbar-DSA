#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;
void printDuplicates(string s){
    unordered_map<char, int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(auto i : m){
        if(i.second>1){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
}
int main(){
    string s;
    getline(cin, s);
    printDuplicates(s);
    return 0;
}
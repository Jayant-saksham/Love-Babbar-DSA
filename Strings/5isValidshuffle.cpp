#include<iostream>
using namespace std;
bool isValidShuffle(string a, string b, string shuffle){
    if(a.size()+b.size()!=shuffle.size()){
        return false;
    }
    int i=0,j=0,k=0;
    while(k!=shuffle.length()){
        
    }

}
int main(){
    string a, b;
    string shuffle;
    cin>>a>>b>>shuffle;
    cout<<isValidShuffle(a,b,shuffle)<<endl;
    return 0;
}
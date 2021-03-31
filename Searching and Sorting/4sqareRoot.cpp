#include<iostream>
#include<math.h>
using namespace std;
int countNumbers(int n){
    int a = sqrt(n);
    if(a*a==n){
        return a-1;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    return 0;
}
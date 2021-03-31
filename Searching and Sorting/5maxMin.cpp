#include<iostream>
using namespace std;
int middle(int a, int b, int c){
    if(a>b){
        if(b>c){
            return b;
        }
        else if(a>c){
            return c;
        }
        else{
            return a;
        }
    }
    else{
        if(a>c){
            return a;
        }
        else if(b>c){
            return c;
        }
        else{
            return b;
        }
    }
}
int main(){
    int a = 20, b = 30, c = 40;
    return 0;
}
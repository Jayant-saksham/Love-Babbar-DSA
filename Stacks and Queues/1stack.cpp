#include<iostream>
using namespace std;
struct stack{
    int top;
    int size;
    int *A;
};
struct stack s;
bool isEmpty(){
    return s.top == -1;
}
bool isFull(){
    return s.top == s.size-1;
}
int top(){
    if(isEmpty()){
        return -1;
    }
    return s.top;
}
void push(int x){
    if(isFull()){
        cout<<"Stack overflow"<<endl;
        return;
    }
    s.top++;
    s.A[s.top]=x;    
}
int pop(){
    if(isEmpty()){
        cout<<"Stack underflow"<<endl;
    }
    s.top--;
}
void display(){
    if(isEmpty()){
        cout<<"Stack empty"<<endl;
        return;
    }
    for(int i=s.top;i>=0;i--){
        cout<<s.A[i]<<" ";
    }
    cout<<endl;
}
void menu(){
    cout<<"Enter 1 : PUSH"<<endl;
    cout<<"Enter 2 : POP"<<endl;
    cout<<"Enter 3 : DISPLAY"<<endl;
}
int main(){
    cout<<"Enter size : ";
    int n;
    cin>>n;
    s.size=n;
    s.A = new int[n];
    s.top=-1;
    while(1){
        menu();
        int a;
        cin>>a;
        if(a==1){
            int c;
            cin>>c;
            push(c);
        }
        else if(a==2){
            pop();
        }
        else if(a==3){
            display();
        }
        else{
            break;
        }
    }
    return 0;
}
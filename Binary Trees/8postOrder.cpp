#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *right;
    struct node *left;
};
struct node *takeInput(){
    int data;
    cout<<"Enter data : ";
    cin>>data;
    if(data==-1) {
        return NULL;
    }
    struct node *root = new node;
    root->data=data;
    struct node *leftNode = takeInput();
    struct node *rightNode = takeInput();
    root->left=leftNode;
    root->right=rightNode;
    return root;
}
void postOrderIteration(struct node *root){
    if(root==NULL){
        return;
    }
    stack<struct node *> s;
    struct node *ptr=root;
    while(ptr!=NULL || !s.empty()){
        if(ptr!=NULL){
            if(ptr->right!=NULL){
                s.push(ptr->right);
            }
            s.push(ptr);
            ptr=ptr->left;
        }
        else{
            ptr=s.top();
            s.pop();
            if(!s.empty() && ptr->right!=NULL && ptr->right==s.top()){
                struct node *temp = s.top();
                s.pop();
                s.push(ptr);
                ptr=temp;
            }
            else{
                cout<<ptr->data<<" ";
                ptr=NULL;
            }
        }
    }
   
}
void postOrderRecursion(struct node *root){
    if(root==NULL){
        return;
    }
    postOrderRecursion(root->left);
    postOrderRecursion(root->right);
    cout<<root->data<<" ";
}
int main(){
    struct node *root = takeInput();
    // postOrderRecursion(root);
    // cout<<endl;
    postOrderIteration(root);
    return 0;
}
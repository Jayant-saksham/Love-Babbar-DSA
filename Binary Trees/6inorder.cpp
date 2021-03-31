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
void inorderIteration(struct node *root){
    if(root==NULL){
        return;
    }
    struct node *ptr=root;
    stack<struct node *> s;
    while(ptr!=NULL || !s.empty()){
        if(ptr!=NULL){
            s.push(ptr);
            ptr=ptr->left;
        }
        else{
            ptr=s.top();
            s.pop();
            cout<<ptr->data<<" ";
            ptr=ptr->right;
        }
    }
}
void inOrderRecursion(struct node *root){
    if(root==NULL){
        return;
    }
    inOrderRecursion(root->left);
    cout<<root->data<<" ";
    inOrderRecursion(root->right);
}
int main(){
    struct node *root=takeInput();
    inOrderRecursion(root);
    inorderIteration(root);
    return 0;
}
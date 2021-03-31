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
void preOrderIteration(struct node *root){
    if(root==NULL){
        return;
    }
    stack<struct node *> s;
    struct node *ptr=root;
    while(ptr!=NULL || !s.empty()){
        if(ptr!=NULL){
            s.push(ptr);
            cout<<ptr->data<<" ";
            ptr=ptr->left;
        }
        else{
            ptr=s.top();
            s.pop();
            ptr=ptr->right;
        }
    }

}
void preOrderRecursion(struct node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderRecursion(root->left);
    preOrderRecursion(root->right);
}
int main(){
    struct node *root=takeInput();
    preOrderIteration(root);
    preOrderRecursion(root);
    return 0;
}
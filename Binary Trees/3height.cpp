#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *right;
    struct node *left;
};
int height(struct node *root){
    if(root==NULL){
        return 0;
    }
    int leftAns = height(root->left);
    int rightAns = height(root->right);
    return 1+max(leftAns, rightAns);
}
struct node *takeInput(){
    int data;
    cout<<"Enter data : ";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    struct node *root=new node;
    root->data=data;
    struct node *left=takeInput();
    struct node *right=takeInput();
    root->left=left;
    root->right=right;
    return root;
}
int main(){
    return 0;
}
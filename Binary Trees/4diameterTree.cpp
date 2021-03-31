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
    int left = height(root->left);
    int right = height(root->right);
    return 1 + max(left, right);
}
int diameter(struct node *root){
    if(root==NULL){
        return 0;
    }
    int option1 = height(root->left);
    int option2 = height(root->right);
    return 1 + max()
}
struct node *takeInput(){
    int data;
    cout<<"Enter data : ";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    struct node *root = new node;
    root->data=data;
    struct node *left = takeInput();
    struct node *right = takeInput();
    root->left=left;
    root->right=right;
    return root;
}
int main(){
    return 0;
}
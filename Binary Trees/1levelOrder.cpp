#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *right;
    struct node *left;
};
void printLevelOrder(struct node *root){
    queue<struct node *> q;
    if(root==NULL){
        return;
    }
    q.push(root);
    while(!q.empty()){
        struct node *temp = q.front();
        q.pop();
        cout<<temp->data<<" "; 
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
struct node *takeInput(){
    struct node *root=new node;
    cout<<"Enter root data : ";
    int rootData;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    root->data=rootData;
    queue<struct node *> q;
    q.push(root);
    while(!q.empty()){
        struct node *temp = q.front();
        q.pop();
        cout<<"Enter left data of "<<temp->data<<" : ";
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            struct node *left = new node;
            left->data=leftData;
            temp->left=left;
            q.push(left);
        }
        cout<<"Enter right data of "<<temp->data<<" : ";
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            struct node *right = new node;
            right->data=rightData;
            temp->right=right;
            q.push(right);
        }
    }
    return root;    
}
int main(){
    struct node *root=takeInput();
    printLevelOrder(root);
    return 0;
}
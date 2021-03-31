#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *right;
    struct node *left;
};
struct node *takeInput(){
    struct node *root=new node;
    cout<<"Enter data : ";
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root->data=data;
    struct node *left = takeInput();
    struct node *right = takeInput();
    root->left=left;
    root->right=right;
    return root;
}
void reverseLevelOrder(struct node *root){
    vector<int> ans;
    if(root==NULL){
        return;
    }
    queue<struct node *> q;
    q.push(root);
    while(!q.empty()){
        struct node *temp = q.front();
        ans.push_back(temp->data);
        q.pop();
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        if(temp->left!=NULL){
            q.push(temp->left);
        }
    }
    reverse(ans.begin(), ans.end());
    for(auto i : ans){
        cout<<i<<" ";
    }
}
int main(){
    struct node *root = takeInput();
    reverseLevelOrder(root);
    return 0;
}
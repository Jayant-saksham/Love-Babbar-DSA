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
vector<int> printRightView(struct node *root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<struct node *> q;
    q.push(root);
    struct node *ptr;
    while(!q.empty()){
        int size = q.size();
        ans.push_back(q.back()->data);
        while(size--){
            struct node *ptr=q.back();
            q.pop();
            if(ptr->left!=NULL){
                q.push(ptr->left);
            }
            if(ptr->right!=NULL){
                q.push(ptr->right);
            }
        }
    }
    return ans;
}
int main(){
    struct node *root=takeInput();
    vector<int> v = printRightView(root);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
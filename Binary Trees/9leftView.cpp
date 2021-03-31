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
vector<int> printLeftView(struct node *root){
    vector<int> ans;
    queue<struct node *> q;
    if(root==NULL){
        return ans;
    }
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        ans.push_back(q.front()->data);
        while(size--){
            struct node *ptr=q.front();
            q.pop();
            if(ptr->left!=NULL){
                q.push(ptr->left);
            }
            if(ptr->right!=NULL){
                q.push(ptr->right);
            }
        }
    }
}
int main(){
    struct node *root=takeInput();
    vector<int> v= printLeftView(root);
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}
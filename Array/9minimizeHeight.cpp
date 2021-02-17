#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int getMinDifference(int A[], int n, int k){
    vector<pair<int,int>>v;
    vector<int>vis(n);
    for(int i=0;i<n;i++){
        if(A[i]-k>=0){
            v.push_back(make_pair(A[i]-k, i));
        }
        v.push_back(make_pair(A[i]+k,i));
    }
    sort(v.begin(), v.end());
    int ele=0;
    int left=0;
    int right=0;
    while(ele<n && right<v.size()){
        if(vis[v[right].second]==0){
            ele++;
        }
        vis[v[right].second]++;
        right++;
    }
    int ans=v[right-1].first-v[left].first;
    while(right<v.size()){
        if(vis)
    }
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int k;
    cin>>k;
    return 0;
}
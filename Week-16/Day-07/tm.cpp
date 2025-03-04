#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

const int maxN=1e5+10;
vector<pair<int,int>>tree[maxN];
vector<int>ans(maxN);
void dfs(int current,int parent,bool change){
    for(auto x:tree[current]){
        if(x.first!=parent){
            ans[x.second]=change?3:2;
            dfs(x.first,current,!change);
        }
    }
}
void solve(){
    int n;
    cin>>n;
    bool flag=true;
    for(int i=0;i<=n;i++){
        tree[i].clear();
        ans[i]=0;
    }
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back({v,i});
        tree[v].push_back({u,i});
        if(tree[u].size()>2||tree[v].size()>2)flag=false;
    }
    if(!flag){
        minus return;
    }
    int leaf=1,pnt=0;
    for(auto x:tree){
        if(x.size()==1){
            leaf=pnt;
            break;
        }pnt++;
    }
    dfs(leaf,-1,0);
    for(int i=1;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
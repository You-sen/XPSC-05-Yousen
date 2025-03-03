#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;
const int maxN=2e5+10;
vector<int>tree[maxN];
vector<int>cnt(maxN);
void dfs(int current,int parent){
    if(tree[current].size()==1&&tree[current][0]==parent){
        cnt[current]=1;
        return;
    }
    for(auto childs:tree[current]){
        if(childs==parent)continue;
        dfs(childs,current);
        cnt[current]+=cnt[childs];
    }
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        tree[i].clear();
        cnt[i]=0;
    }
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    int q;
    cin>>q;
    dfs(1,-1);
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        cout<<(ll)cnt[x]*cnt[y]<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
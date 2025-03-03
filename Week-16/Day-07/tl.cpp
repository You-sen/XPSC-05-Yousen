#include<bits/stdc++.h>
using namespace std;
const int maxN=1e5+10;
vector<int>tree[maxN];
vector<int>cats(maxN);
int n,m,ans=0;

void dfs(int current,int parent, int catsCount){
    if(catsCount>m)return;
    bool leaf=1;
    for(auto childs:tree[current]){
        if(childs==parent)continue;
        int count=cats[childs]?catsCount+1:0;
        dfs(childs,current,count);
        leaf=0;
    }
    ans+=leaf;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>cats[i];
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1,-1,cats[1]);
    cout<<ans<<endl;
    return 0;
}
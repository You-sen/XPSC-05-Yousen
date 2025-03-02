#include<bits/stdc++.h>
using namespace std;
const int maxN=1e5+1;
vector<int>tree[maxN];
vector<long long>grp(2,0);
void dfs(int current,int parent,int group){
    grp[group]++;
    for(auto v:tree[current]){
        if(v!=parent)dfs(v,current,!group);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1,0,0);
    cout<<grp[0]*grp[1]-(n-1)<<endl;
    return 0;
}
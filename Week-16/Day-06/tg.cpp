#include<bits/stdc++.h>
using namespace std;
const int maxN=1e5;
vector<int>vec[maxN+1];
int ans;
int dfs(int current,int parent){
    int size=1;
    for(auto v:vec[current]){
        if(v==parent)continue;
        size+=dfs(v,current);
    }
    if(size%2==0){
        size=0;
        ans++;
    }
    return size;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    if(n%2!=0){
        cout<<-1<<endl;
    }
    else{
        dfs(1,0);
        cout<<ans-1<<endl;
    }
    return 0;
}
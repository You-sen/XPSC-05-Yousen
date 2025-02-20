#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,root;
    cin>>n;
    vector<int>g[n+1],badChild(n+1),selfBad(n+1);
    for(int i=1;i<=n;i++){
        int parent,conditionOfChild;
        cin>>parent>>conditionOfChild;
        int u=parent,v=i;
        if(u!=-1)
            g[u].push_back(v);
        else root=i;
        if(conditionOfChild==1){
            selfBad[v]=1;
            badChild[u]++;
        }
    }
    vector<int>ans;
    for(int i=1;i<=n;i++){
        if(root==i)continue;
        if(g[i].size()==badChild[i]&&selfBad[i]==1){
            ans.push_back(i);
        }
    }
    if(ans.empty()){
        cout<<-1<<endl;
    }
    else{
        for(auto x:ans){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}
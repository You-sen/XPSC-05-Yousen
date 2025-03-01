#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

vector<int>v[4000];
vector<pair<int,int>>WB;
void dfs(int current,int parent){
    for(auto x:v[current]){
        if(x!=parent){
            dfs(x,current);
        }
    }
    if(parent!=-1){
        WB[parent].first+=WB[current].first;
        WB[parent].second+=WB[current].second;
    }
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)v[i].clear();
    WB.clear();
    int root=1;
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        v[x].push_back(i);
    }
    string s;
    cin>>s;
    WB.resize(n+1);
    for(int i=0;i<=n;i++){
        WB[i]={0,0};
    }
    for(int i=0;i<n;i++){
        if(s[i]=='W'){
            WB[i+1].first++;
        }
        else{
            WB[i+1].second++;
        }
    }
    dfs(1,-1);
    int res=0;
    for(int i=1;i<=n;i++){
        if(WB[i].first==WB[i].second)res++;
    }
    cout<<res<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
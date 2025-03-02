#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

int px[4]={1,-1,0,0};
int py[4]{0,0,1,-1};

vector<int>matrix[1001];
bool vis[1001][1001];
int n,m;
ll dfs(int x,int y){
    ll depth=matrix[x][y];
    vis[x][y]=true;
    for(int i=0;i<4;i++){
        int mx=x+px[i];
        int my=y+py[i];
        if(mx>=0&&mx<n&&my>=0&&my<m&&!vis[mx][my]&&matrix[mx][my]!=0){
            depth+=dfs(mx,my);
        }
    }
    return depth;
}
void solve(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        matrix[i].assign(m,0);
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
            vis[i][j]=false;
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]||matrix[i][j]==0)continue;
            ans=max(ans,dfs(i,j));
        }
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
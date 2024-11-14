#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int v[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int cur=v[i][j];
                int ti=i-1,tj=j-1;
                int total=0;
                while(ti>=0&&ti<n&&tj>=0&&tj<m){
                    total+=v[ti][tj];
                    ti--;
                    tj--;
                }
                ti=i+1,tj=j+1;
                while(ti>=0&&ti<n&&tj>=0&&tj<m){
                    total+=v[ti][tj];
                    ti++;
                    tj++;
                }
                ti=i+1,tj=j-1;
                while(ti>=0&&ti<n&&tj>=0&&tj<m){
                    total+=v[ti][tj];
                    ti++;
                    tj--;
                }
                ti=i-1,tj=j+1;
                while(ti>=0&&ti<n&&tj>=0&&tj<m){
                    total+=v[ti][tj];
                    ti--;
                    tj++;
                }
                total+=v[i][j];
                ans=max(total,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
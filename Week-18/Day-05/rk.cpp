#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n;
    cin>>n;
    string mat[n];
    set<int>res[n];
    for(int i=0;i<n;i++){
        cin>>mat[i];
        res[i].insert(i+1);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]=='1'){
                res[j].insert(i+1);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<res[i].size()<<" ";
        for(auto x:res[i]){
            cout<<x<<" ";
        }cout<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
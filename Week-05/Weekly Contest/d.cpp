#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,m;
    cin>>n>>m;
    string s,k;
    cin>>s>>k;
    int ans=INT_MAX;
    for(int i=0;i<n-m+1;i++){
        int op=0;
        for(int j=0;j<m;j++){
            int ten=10-abs((s[i+j])-k[j]);
            int zero=abs((s[i+j])-k[j]);
            op+=min(ten,zero);
        }
        ans=min(ans,op);
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
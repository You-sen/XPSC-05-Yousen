#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>v(n+1,0);
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        ans=max(ans,v[i]-v[i-1]);
    }
    ans=max(ans,2*(x-v[n]));
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
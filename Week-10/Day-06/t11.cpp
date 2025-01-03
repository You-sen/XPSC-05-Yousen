#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll ans=0;
    for(int i=0;i<n-1;i++){
        int lb=lower_bound(v.begin()+i+1,v.end(),l-v[i])-v.begin();
        int rb=upper_bound(v.begin()+i+1,v.end(),r-v[i])-v.begin();
        ans+=rb-lb;
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
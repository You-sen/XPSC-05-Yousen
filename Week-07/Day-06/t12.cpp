#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,m;
    cin>>n>>m;
    ll startRange=max(n-m,0LL);
    ll endRange=n+m;
    ll ans=0;
    for(ll i=0;i<32;i++){
        ll endBlock=endRange/(1LL<<i);
        if(endBlock%2!=0){
            ans|=(1LL<<i);
            continue;
        }
        ll startBlock=startRange/(1LL<<i);
        if(endBlock!=startBlock)ans|=(1LL<<i);
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
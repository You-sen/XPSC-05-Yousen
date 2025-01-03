#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n),prefix(n),maxNeed(n);
    ll maxV=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        maxNeed[i]=max(maxV,a[i]);
        maxV=maxNeed[i];
        if(i==0)prefix[i]=a[i];
        else prefix[i]=prefix[i-1]+a[i];
    }
    while(q--){
        ll k;
        cin>>k;
        ll steps=upper_bound(maxNeed.begin(),maxNeed.end(),k)-maxNeed.begin();
        if(steps==0)cout<<0<<" ";
        else
        cout<<prefix[steps-1]<<" ";
    }cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
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
    vector<ll>v(m);
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        v[i]=min(n-1,x);
    }
    sort(v.begin(),v.end());
    vector<ll>suf(m);
    suf[m-1]=v[m-1];
    for(ll i=m-2;i>=0;i--){
        suf[i]=suf[i+1]+v[i];
    }
    ll ans=0;
    for(ll i=0;i<m;i++){
        ll need=n-v[i];
        ll pos=lower_bound(v.begin(),v.end(),need)-v.begin();
        if(pos<m)
            ans+=suf[pos]+((m-pos)*(v[i]-n+1));
        if(v[i]*2>=n)
            ans-=(2*v[i]-n+1);
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
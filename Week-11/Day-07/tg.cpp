#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    auto ok=[&](ll height){
        ll total=0;
        for(ll i=0;i<n;i++){
            total+=max(0LL,height-v[i]);
            if(total>x)return false;
        }
        return true;
    };
    ll l=0,r=2e9,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
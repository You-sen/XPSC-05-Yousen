#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;
ll GCD(ll a,ll b){
    return __gcd(a,b);
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n),pv(n);
    ll total=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
        if(i==0){
            pv[i]=v[i];
        }
        else{
            pv[i]=pv[i-1]+v[i];
        }
    }
    ll ans=0;
    for(ll i=0;i<n-1;i++){
        ans=max(ans,GCD(pv[i],total-pv[i]));
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
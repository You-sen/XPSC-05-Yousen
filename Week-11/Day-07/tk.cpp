#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){ 
    ll n;
    cin>>n;
    ll extra=0;
    auto ok=[&](ll types){
        ll totalPairs=(1LL*types*(types-1))/2;
        if(totalPairs<=n){
            extra=n-totalPairs;
            return true;
        }
        return false;
    };
    int l=2,r=2e9,mid;
    ll ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans+extra<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
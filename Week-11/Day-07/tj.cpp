#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll h,n;
    cin>>h>>n;
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        h-=a[i];
    }
    for(ll i=0;i<n;i++)cin>>b[i];
    if(h<=0){
        cout<<1<<endl;
        return;
    }
    auto ok=[&](ll turn){
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=(turn/b[i])*a[i];
        }
        return h-sum<=0;
    };
    ll l=0,r=4e10,mid,ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans+1<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
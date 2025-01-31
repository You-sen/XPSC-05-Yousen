#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,c,d;
    cin>>n>>c>>d;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end(),greater<ll>());

    ll total=0;
    for(int i=0;i<min(n,d);i++){
        total+=v[i];
    }
    if(total>=c){
        cout<<"Infinity"<<endl;
        return;
    }
    auto ok=[&](ll gap){
        if(gap==0){
            return v[0]*d>=c;
        }
        ll total2=0,gain=0;
        if(gap>=n){
            total2=accumulate(v.begin(),v.end(),0LL);
        }
        else{
            for(int i=0;i<gap;i++){
                total2+=v[i];
            }
        }
        ll repeat=d/gap;
        gain=repeat*total2;
        if(d%gap>=n){
            gain+=accumulate(v.begin(),v.end(),0LL);
        }
        else{
            for(int i=0;i<(d%gap);i++){
                gain+=v[i];
            }
        }
        return gain>=c;
    };
    ll l=0,r=d+2,ans=-1,mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid+1)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(ans==-1)cout<<"Impossible"<<endl;
    else cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
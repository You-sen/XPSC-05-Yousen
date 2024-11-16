#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll>nv(n),mv(m),sv(n,0);
        for(ll i=0;i<n;i++)cin>>nv[i];
        for(ll i=0;i<m;i++)cin>>mv[i];
        sort(nv.begin(),nv.end(),greater<ll>());
        sort(mv.begin(),mv.end(),greater<ll>());

        ll ni=0,mi=0,si=0;
        while(ni<n&&mi<m){
            sv[si]=min(h*mv[mi],nv[ni]);
            si++,ni++,mi++;
        }
        long long sum=0;
        for(auto v:sv)sum+=v;
        cout<<sum<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>j(n),g(m);
    for(ll i=0;i<n;i++)cin>>j[i];
    for(ll i=0;i<m;i++)cin>>g[i];

    auto minV=distance(j.begin(),min_element(j.begin(),j.end()));
    auto maxV=distance(g.begin(),max_element(g.begin(),g.end()));
    if(j[minV]<g[maxV]){
        swap(j[minV],g[maxV]);
    }
    if(k%2==0){
        auto maxV=distance(j.begin(),max_element(j.begin(),j.end()));
        auto minV=distance(g.begin(),min_element(g.begin(),g.end()));
        swap(j[maxV],g[minV]);
    }
    ll sum=accumulate(j.begin(),j.end(),0LL);
    cout<<sum<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
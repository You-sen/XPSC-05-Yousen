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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    map<pair<ll,pair<ll,ll>>,ll> tuple;
    map<pair<ll,ll>,ll>firstUnmatch,secondUnmatch,thirdUnmatch;
    ll ans=0;
    for(ll i=0;i<n-2;i++){
        ll fullMatch=tuple[{v[i],{v[i+1],v[i+2]}}];

        ans+=firstUnmatch[{v[i+1],v[i+2]}]-fullMatch;
        ans+=secondUnmatch[{v[i],v[i+2]}]-fullMatch;
        ans+=thirdUnmatch[{v[i],v[i+1]}]-fullMatch;

        firstUnmatch[{v[i+1],v[i+2]}]++;
        secondUnmatch[{v[i],v[i+2]}]++;
        thirdUnmatch[{v[i],v[i+1]}]++;
        tuple[{v[i],{v[i+1],v[i+2]}}]++;
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
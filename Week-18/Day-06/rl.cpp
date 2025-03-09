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
    ll ans=0;
    set<pair<ll,ll>>up,down;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        if(y==0){
            down.insert({x,y});
        }
        else up.insert({x,y});
    }
    for(auto v:up){
        ll x=v.first,y=v.second;
        if(down.find({x,0})!=down.end()){
            ans+=(n-2);
        }
        if(down.find({x+1,0})!=down.end()&&down.find({x-1,0})!=down.end())ans++;
    }
    for(auto v:down){
        ll x=v.first,y=v.second;
        if(up.find({x+1,1})!=up.end()&&up.find({x-1,1})!=up.end())ans++;
    }
    cout<<ans<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
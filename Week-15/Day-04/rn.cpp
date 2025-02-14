#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,c,q;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    vector<pair<ll,ll>>op(c),sg(c);
    ll currS=n;
    for(ll i=0;i<c;i++){
        ll l,r;
        cin>>l>>r;
        op[i]={l,r};
        sg[i]={currS+1,currS+(r-l+1)};
        currS=sg[i].second;
    }
    while(q--){
        ll x;
        cin>>x;
        for(ll i=c-1;i>=0;i--){
            if(x>=sg[i].first&&x<=sg[i].second){
                x=op[i].first+x-sg[i].first;
            }
        }
        cout<<s[x-1]<<endl;
    }
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
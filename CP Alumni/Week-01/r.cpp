#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase ll t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    map<tuple<ll,ll,ll>,ll>mt;
    mt[{0,0,0}]=0;
    mt[{0,0,1}]=1;
    mt[{0,1,0}]=1;
    mt[{0,1,1}]=-1;
    mt[{1,0,0}]=-1;
    mt[{1,0,1}]=1;
    mt[{1,1,0}]=1;
    mt[{1,1,1}]=0;
    ll a=0,b,c,d;
    cin>>b>>c>>d;
    for(ll i=60;i>=0;i--){
        ll bbit=min(((1LL<<i)&b),1LL);
        ll cbit=min(((1LL<<i)&c),1LL);
        ll dbit=min(((1LL<<i)&d),1LL);
        ll abit=mt[{bbit,cbit,dbit}];
        if(abit==-1){
            minus return;
        }
        else if(abit==1)a+=(1LL<<i);
    }
    cout<<a<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
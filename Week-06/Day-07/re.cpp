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
    ll pos=0;
    bool posF=true;
    ll sum=0,zeros=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(i!=n-1&&posF&&v[i]>0){
            pos=i;
            posF=false;
        }
        sum+=v[i];
    }
    sum-=v[n-1];
    if(!posF)
    for(ll i=pos;i<n-1;i++){
        if(v[i]==0)zeros++;
    }
    cout<<sum+zeros<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
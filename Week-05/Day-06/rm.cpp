#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n,maxV=0;
    ll count=0;
    cin>>n;
    vector<ll>v(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
        maxV=max(maxV,mp[v[i]]);
    }
    while(maxV<n){
        count++;
        count+=min(n-maxV,maxV);
        maxV+=maxV;
    }
    cout<<count<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    ll n;
    cin>>n;
    vector<ll> na(n);
    for(long long i=0;i<n;i++)cin>>na[i];
    for(ll i=0;i<n-2;i++)na[n-2]-=na[i];
    cout<<na[n-1]-na[n-2]<<endl;
}
int main() {
    fasterIO
    testCase
    solve();
    return 0;
}

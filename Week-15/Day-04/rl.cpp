#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>vp(n);
    for(int i=0;i<n;i++)cin>>vp[i].first;
    for(int i=0;i<n;i++)cin>>vp[i].second;
    sort(vp.begin(),vp.end());
    for(auto x:vp)cout<<x.first<<" ";
    cout<<endl;
    for(auto x:vp)cout<<x.second<<" ";
    cout<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
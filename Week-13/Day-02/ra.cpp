#include<bits/stdc++.h>
using namespace std;
#define fasterIO ios::sync_with_stdio(false);cin.tie(0);
#define testCase int t=1;cin>>t;while(t--)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus cout<<-1<<endl;

void solve(){
    int n,maxV=INT_MIN;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n-1;i++)maxV=max(maxV,(v[n-1]-v[i]));
    for(int i=1;i<n;i++)maxV=max(maxV,(v[i]-v[0]));
    for(int i=1;i<n;i++)maxV=max(maxV,(v[i-1]-v[i]));
    maxV=max(maxV,(v[n-1]-v[0]));
    cout<<maxV<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
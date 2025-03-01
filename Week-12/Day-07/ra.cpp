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
    int ones=0,zeros=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1)ones++;
        else if(v[i]==0)zeros++;
    }
    ll total=(1LL<<zeros)*(ones);
    cout<<total<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
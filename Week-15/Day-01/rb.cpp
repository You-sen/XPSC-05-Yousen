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
    map<int,int>mp;
    ll count=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x-i]++;
    }
    for(auto v:mp){
        ll val=v.second;
        if(val>1){
            count+=((val*(val-1))/2);
        }
    }
    cout<<count<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}
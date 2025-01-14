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
    vector<int>v(n);
    ll total=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total+=((v[i]+1)/2);
    }
    cout<<total<<endl;
}

int main() {
    fasterIO
    testCase
    solve();
    return 0;
}